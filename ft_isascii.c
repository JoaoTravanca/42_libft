/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:14:52 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:31:05 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
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