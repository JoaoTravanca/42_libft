/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:27:33 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 18:54:31 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
char *ft_strchr(const char *s, int c)
{

	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

#include <stdio.h>

int main (void)
{
	char str[] = "Isto e fixe fixolas";
	char letra = 'F';
	

	printf("endereco pretendido %p", ft_strchr(str, letra));
	

	return (0);
}
