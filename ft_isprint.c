/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:21:29 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 19:14:16 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
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