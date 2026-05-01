/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:38:36 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/01 16:43:06 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	*ft_free_all(char **result, size_t j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
	return (NULL);
}

static char	*ft_get_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_memcpy(word, s, i);
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc ((ft_count_words (s, c) + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = ft_get_word (s, c);
			if (!result[i])
				return (ft_free_all(result, i));
			while (*s && *s != c)
				s++;
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

int main (void)
{
    char *src = "isto nao foi nada divertido xd";
    char c = ' ';
    char **result;
    int i;

    i = 0;

    result = ft_split (src, c);

    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
		i++;
        
    }
	result[i] = NULL;
    return (0);
}
