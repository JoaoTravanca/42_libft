/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:40:54 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/17 16:15:05 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;

    while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int main (void)
{
    char s1[] = "TESTE amanha";
    char s2[] = "TESTE hoje";
    int n = 7;

    printf("resultado do strncmp e %d", ft_strncmp (s1, s2, n));

    return (0);
} */
