/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:43:16 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/17 17:29:41 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char *)s;

    while(*str && n > 0)
    {
        if (*str == (unsigned char) c)
            return ((void *) str);
        str++;
        n--;
    }
    return (NULL);
}

#include <stdio.h>
int main (void)
{
    char *str = "Que divertido que isto esta a ser";
    char letter = 's';
    size_t bytes = 20;

    printf("O endereco do caracter e %p\n", ft_memchr(str, letter, bytes));
    printf("O endereco do caracter e %p\n", memchr(str, letter, bytes));
    return (0);
}
