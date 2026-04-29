/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:15:38 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:34:56 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower (int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/* #include <unistd.h>
int main (void)
{
	char *str = "AAAAAAAAAAAAAAAAAAAAA";

	while (*str)
	{
		char letra = ft_tolower(*str);
		write(1, &letra, 1);
		str++;
	}
	return (0);
} */
