/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:08:10 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/16 19:08:11 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c)
{
	char *letter = NULL;

	while (*s)
	{
		if (*s ==  (char)c)
			letter = (char *)s;
		s++;
	}
	if (*s == (char)c)
		letter = (char *)s;
		
	return (letter);
}
