/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:18:49 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/04 15:49:36 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	t_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* int main (void)
{
	char *str = "Ola mundo";

	size_t tamanho = ft_strlen (str);
	printf("O tamanho da string e de %zu caracteres", tamanho);
	return (0);
} */