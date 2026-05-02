/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:06:45 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/02 17:44:55 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/* #include <unistd.h>
int main(void)
{
	char *str = "letras aleatorias e divertidas";
	
	while (*str)
	{
		char c = ft_toupper(*str);
		write (1, &c, 1);
		str++;
	}
	return (0);
} */