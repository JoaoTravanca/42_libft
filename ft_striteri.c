/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:35:46 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/14 17:56:08 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void ft_test(unsigned int i, char *c)
{
    if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
        *c -= 32;
} */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* int main (void)
{
	char str[] = "ola mundo";
	printf("string antes %s\n", str);
	ft_striteri(str, ft_memset);
	printf("string depois %s\n", str);
	return (0);
} */