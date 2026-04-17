/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:06:57 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/15 17:09:12 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* #include <stdio.h>
int main (void)
{
	char src[] = "ISTO E UM TESTE";
	char dst [15];

	size_t	i = 5;

	ft_strlcpy (dst, src, i);
	printf("dest = %s", dst);
	return (0);
} */