/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:36:26 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:33:56 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t ft_strlen (const char *s)
{
    size_t  i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

static char *ft_strdup(const char *s)
{
    int i;
    char *dst;

    dst = malloc ((ft_strlen(s) + 1) * sizeof (char));
    if (!dst)
        return (NULL);
    i = 0;
    while(s[i] != '\0')
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

static char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char) c)
            return ((char *)s);
        s++;
    }
    if (*s == (char) c)
        return ((char *)s);    
    return (NULL);
}
char *ft_strncpy_custom(char *dest, const char *src, size_t start, size_t end)
{
    size_t i;

    i = 0;
    while (src[start] && start <= end)
    {
        dest[i] = src[start];
        start++;
        i++;
    }
	dest[i] = '\0';
    return (dest);
}


char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *new;
    
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
    return (ft_strncpy_custom(new, s1, start, end - 1));
}

/* #include <stdio.h>
int main (void)
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
}
 */




