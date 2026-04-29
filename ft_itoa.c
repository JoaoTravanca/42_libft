/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:41:59 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:31:11 by jtravanc         ###   ########.fr       */
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
	int		i;
	char	*arr;
	long	num;

	num = n;
	i = ft_nbr_len (num) - 1;
	arr = malloc ((ft_nbr_len(num) + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	arr[i] = '\0';
	if (num == 0)
		arr[0] = '0';
	if (num < 0)
	{
		arr[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		arr[i--] = (num % 10) + '0';
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