/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:14:52 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/10 19:05:44 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/* #include <stdio.h>
int main(void)
{
	char n;
	n = 'L';

	if (ft_isascii(n) == 1)
	printf("Is ascii");
	else
	printf("Not ascii");
	return (0);
} */