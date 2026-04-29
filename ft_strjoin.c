/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:35:32 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:33:19 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_strlen (const char *s)
{
    size_t  i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new;
    size_t i;
    size_t j;
    size_t k;

    if (!s1 || !s2)
        return (NULL);
    i = ft_strlen(s1);
    j = ft_strlen(s2);
    new = malloc ((i + j + 1) * sizeof (char));
    if (!new)
        return (NULL);
        
    i = 0;
    k = 0;
    while (s1[i] != '\0')
    {
        new[k] = s1[i];
        i++;
        k++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new[k] = s2[j];
        j++;
        k++;
    }
    new[k] = '\0';
    return (new);
}

#include <stdio.h>
int main (void)
{
    char *s1 = "PARTE UM";
    char *s2 = " PARTE dois";    
    char *new = ft_strjoin (s1, s2);
    printf("teste %s\n", new);
    return (0);
}