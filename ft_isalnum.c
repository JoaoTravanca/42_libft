/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:03:08 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 19:11:53 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if ((c >= '1' && c <= '9'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	char n;
	n = 'L';

	if (ft_isalnum(n) == 1)
	printf("Is alphanum");
	else
	printf("Not alphanum");
	return (0);
} */