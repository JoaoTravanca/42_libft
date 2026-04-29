/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:15:50 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:33:22 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen (const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}
	
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;
	size_t	j;

	s_len = ft_strlen(src);
	d_len = 0;
    
	while (dst[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = d_len;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}


/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{
    char src[] = "Ola mundo";
    char dst[10];

    size_t test = ft_strlcat(dst, src, 10);

    printf("Resultado: %s\n", dst);
    printf("Tamanho retornado: %zu\n", test);

    return (0);
} */