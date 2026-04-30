/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:52:04 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 18:06:41 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\r' || *nptr == '\f' || *nptr == '\v')
		nptr ++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (*nptr - '0') + (result * 10);
		nptr++;
	}
	return (sign * result);
}

/* int main (void)
{
    char str[] = "        -34937";

    int num = ft_atoi(str);

    printf ("O resultado e %d\n", num);
    
    return (0);
}  */