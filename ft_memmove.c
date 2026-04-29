/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:57:21 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:31:55 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t 	i;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest2 > src2)
	{
		i = n - 1;
		while (i > 0)
		{
			i--;
			dest2[i] = src2[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i]; 
			i++;
		}
	}
	return ((void *)dest);
}

/* #include <stdio.h>
int main (void)
{
	char src[] = "teste";
	char dest[] = "Nao sei";
	size_t size = 5;
	printf("src - %s\n", src);
	printf("dest - %s\n", dest);
	ft_memmove (src, dest, size);
	printf("apos memmove - %s", dest);
	

	return (0);	
} */

/* 
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest. */