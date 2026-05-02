/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:22:38 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/02 17:44:03 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	dst = malloc ((ft_strlen (s) + 1) * sizeof (char));
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int main (void)
{
    char *str = "Um teste divertido";
    char *new = ft_strdup(str);

    printf("str: %s\n", str);
    printf("new: %s\n", new);
    free (new);
    return (0);
}*/
