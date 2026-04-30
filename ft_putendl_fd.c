/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:28:00 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 18:57:24 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

/* int main (void)
{
	ft_putendl_fd ("um", 1);
	ft_putendl_fd ("dois", 1);
	ft_putendl_fd ("tres", 1);
	return (0);
} */