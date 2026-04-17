/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:18:34 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 19:09:52 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	*str = (unsigned char *)s;
	while (n)
	{
		*str = '\0';
		n--;
		str++;
	}
}

/*  #include <stdio.h>
int main (void)
{
	char str[] = "APagar letras";
	char str2[] = "APagar letras";

	size_t size = 1;
	printf("A string antes %s\n", str);
	bzero(str, size);
	ft_bzero(str2, size);
	printf("A string fica %s\n", str);
	printf("A string fica %s\n", str2);

} */