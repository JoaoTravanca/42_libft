/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:49:38 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 11:29:42 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list  *lista;

	lista = malloc(sizeof(*lista));
	if (!lista)
		return (NULL);
	lista -> content = content;
	lista -> next = NULL;
	return (lista);
}

int main (void)
{
	char *str = "ola";
	t_list *lista = ft_lstnew(str);

	printf("%s\n", (char *)lista->content);
	free(lista);
	return (0);
}