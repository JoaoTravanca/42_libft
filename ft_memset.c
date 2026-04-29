/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:18:45 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:31:58 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char l = (unsigned char)c;
	void	*origin;

	origin = s;

	while (n)
	{
		*str = l;
		str++;
		n--;
	}
	return ((void * )origin);
}

 #include <stdio.h>

 int main (void)
{
	char str[] = "Isto e um teste";
	char str2[] = "Isto e um teste";	
	size_t size = 14;

	ft_memset(str, '0' , size);
	memset(str2, '0', size);
	printf("A string tornou-se %s\n", str);
	printf("A string tornou-se %s", str2);
	return (0);
}
