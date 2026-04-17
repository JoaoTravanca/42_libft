/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:20:38 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 19:12:17 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z' ))
		return (1);
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	char n;
	n = 'L';

	if (ft_isalpha(n) == 1)
	printf("Is alpha");
	else
	printf("Not alpha");

	return (0);
} */
