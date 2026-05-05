/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:36:26 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/05 17:22:05 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	new = ft_substr (s1, start, end - 1);
	return (new);
}

/* int main (void)
{
    char *str = "abchellobca";
    char *set = "abbbccbaaabbccaaccbaa";
    char *new;

    new = ft_strtrim(str, set);

    printf("str: %s\n", str);
	printf("set: %s\n", set);
    printf("new: %s\n", new);
    free(new);
    return (0);
} */