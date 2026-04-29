/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:44 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:33:37 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t ft_strlen (const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

static char *ft_test (unsigned int i, char c)
{
    char *arr;
    
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new;
    unsigned int i;

    if (!s || !f)
    return (NULL);
    i = 0;
    new = malloc ((ft_strlen(s) + 1) * sizeof(char));
    if (!new)
        return (NULL);
    while (s[i] != '\0')
    {
        new[i] = f(i, s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}

int main (void)
{
    char    *arr;
    char    *new;

    new = ft_strmapi(arr)
    
}