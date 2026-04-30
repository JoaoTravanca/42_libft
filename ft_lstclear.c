/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:29:32 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 18:42:59 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_del (void *content)
{
	(void) content;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	
	if (!lst || !*lst) 
	return;
	while (*lst!= NULL)
	{
		temp = (*lst) -> next;
		del ((*lst) -> content);
		free (*lst);
		*lst = temp;
	}
}

static t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	lista = malloc(sizeof(*lista));
	if (!lista)
		return (NULL);
	lista -> content = content;
	lista -> next = NULL;
	return (lista);
}
static int ft_lstsize(t_list *lst)
{
	int i;
	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/* int main (void)
{
	char *str1 = "sad";
	char *str2 = "sad";
	char *str3 = "sad";
	t_list *lista1 = ft_lstnew (str1);
	t_list *lista2 = ft_lstnew (str2);
	t_list *lista3 = ft_lstnew (str3);
	
	lista1 -> next = lista2;
	lista2 -> next = lista3;
	
	printf ("esta lista tem %d elementos\n", ft_lstsize(lista1));
	ft_lstclear (&lista1, ft_del);
	printf ("esta lista tem %d elementos\n", ft_lstsize(lista1));
	
	return (0);
} */