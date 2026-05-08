/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:41:59 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/08 13:07:18 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_len(int n)
{
	int		count;
	long	c;

	c = n;
	count = 0;
	if (c <= 0)
		count = 1;
	while (c != 0)
	{
		c /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*arr;
	long	num;
	int		len;

	num = n;
	len = ft_nbr_len(n);
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	arr[len--] = '\0';
	if (num == 0)
		arr[0] = '0';
	if (num < 0)
	{
		arr[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		arr[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (arr);
}
/* #include <stdio.h>

int main  (void)
{
    int n = 3453534;
    char *arr = ft_itoa (n);
    printf ("O resultado e %s\n", arr);
    free (arr);
    return (0);
} */