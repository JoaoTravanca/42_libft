/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:36:46 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:32:37 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    long long nb;
    char numero;

    nb = n;

    if (nb < 0)
        {
        write (fd, "-", 1);
        nb = -nb;    
        }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
    }
    numero = (nb % 10) + '0';
    write(fd, &c, 1);
}