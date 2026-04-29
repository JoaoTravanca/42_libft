/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:07:00 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:34:46 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t  ft_strlen (const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

static char *ft_strdup(const char *s)
{
    char *dst;
    size_t i;

    dst = malloc((ft_strlen(s) + 1) * sizeof(char));
    i = 0;
    while (s[i] != '\0')
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	if (!dest && !src)
        return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	
	while (n)
	{
		*dest2 = *src2;
		dest2++;
		src2++;
		n--;
	}
	return ((void *)dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dst;
    size_t  s_len;

    if (!s)
        return (NULL);
    s_len = 0;
    while (s[s_len])
        s_len++;
    if (start >= s_len)
        return (ft_strdup("")); 
    if (len > s_len - start)
        len = s_len - start;
    dst = malloc((len + 1) * sizeof(char));
    if (!dst)
        return (NULL);
    ft_memcpy(dst, s + start, len);
    dst[len] = '\0';

    return (dst);
}

/* #include <stdio.h>

int main (void)
{
    char *str = "Ola bom dia";
    int start = 5;
    size_t len = 10;

    str = ft_substr (str, start, len);

    printf("%s\n", str);

    free (str);
    return (0);
} */