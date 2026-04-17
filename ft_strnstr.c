/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:06:07 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/17 18:19:31 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t  j;

    i = 0;
    if (*little = '\0')
        return (big);
    while (big[i] != '\0')
    {
        j = 0;
        while (little[j] = big[i])
        {
            if (little[j++] = '\0')
                return (big)
            j++;
            i++;   
        }
        i++;
    }

    
}

