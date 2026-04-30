/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:48:39 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 18:48:11 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	lista = malloc(sizeof(*lista));
	if (!lista)
		return (NULL);
	lista->content = content;
	lista->next = NULL;
	return (lista);
}

static t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static void	ft_del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* int main (void)
{
	char *str1 = "ola";
	char *str2 = "mundo";
	char *str3 = "omg";

	t_list *lista1 = ft_lstnew (str1);
	t_list *lista2 = ft_lstnew (str2);
	t_list *lista3 = ft_lstnew (str3);
	lista1 -> next = lista2;
	lista2 -> next = lista3;

	//printf("O ultimo elemento e %s\n", (char *)ft_lstlast(lista1)->content);
	ft_lstdelone (lista2, ft_del);
	printf("O ultimo elemento e %s\n", (char *)ft_lstlast(lista1)->content);
	
	
	free (lista1);
	free (lista3);
	return (0);
} */