/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:30:17 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 19:07:04 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew(void *content)
{
	t_list  *lista;

	lista = malloc(sizeof(*lista));
	if (!lista)
		return (NULL);
	lista -> content = content;
	lista -> next = NULL;
	return (lista);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *node;
	 
	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

int main (void)
{
	char *str1;
	char *str2;
	char *str3;

	t_list *lista1;
	t_list *lista2;
	t_list *lista3;
}