/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:08:10 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/04 19:20:23 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*letter;

	letter = NULL;
	while (*s)
	{
		if (*s == (char)c)
			letter = (char *)s;
		s++;
	}
	if (*s == (char)c)
		letter = (char *)s;
	return (letter);
}
int main (void)
{
	char	*str = "Palavra llll";
	char c = 'l';
	int	i = 0;
	char *resultado = ft_strrchr (str, c);
	printf ("O endereco da ultima ocorrencia do %c", c);
	printf(" na palavra %s e %p\n", str, (void *)resultado);
	while (str[i] != '\0')
	{
		printf("O endereco da letra %c e %p\n", str[i], (void *) &str[i]);
		i++;
	}
	return (0);
}