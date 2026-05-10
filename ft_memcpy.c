/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:18:41 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/10 19:22:48 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	
	if (!dest && !src)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (n)
	{
		*dest2 = *src2;
		dest2++;
		src2++;
		n--;
	}
	return ((void *)dest);
}

/* #include <stdio.h>
int main (void)
{
	char src[] = "Teste";
	char dest[] = "Nao sei";
	size_t size = 3;
	printf("src - %s\n", src);
	printf("dest - %s\n", dest);
	char *test = ft_memcpy (dest, src, size);
	printf("memcpy - %s", test);
	return (0);	
} */

/* The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
 */