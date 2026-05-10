/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:21:29 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/10 19:07:00 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

/* #include <stdio.h>
int main(void)
{
	char n;
	n = '5';

	if (ft_isprint(n) == 1)
	printf("Is printable");
	else
	printf("Not printable");
	return (0);
} */