/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:18:45 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/14 14:18:46 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char *)s;
	unsigned char l = (unsigned char)c;

	while (n)
	{
		*str = l;
		str++;
		n--;
	}
	return ((void * )str);
}

/* #include <stdio.h>

 int main (void)
{
	char str[] = "Isto e um teste";
	char str2[] = "Isto e um teste";	
	size_t size = 7;

	ft_memset(str, 'x', size);
	memset(str2, 'x', size);
	printf("A string tornou-se %s\n", str);
	printf("A string tornou-se %s", str2);
	return (0);
} */
