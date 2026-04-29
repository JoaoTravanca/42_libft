/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:54:20 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 14:09:51 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list *ft_lstnew(void *content)
{
	t_list  *lista;

	lista = malloc(sizeof(*lista));
	if (!lista)
		return (NULL);
	lista -> content = content;
	lista -> next = NULL;
	return (lista);
}

static t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	if (!lst || !new)
		return;
	
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last ->next = new;
	return;
}

int main (void)
{
	char *str1 = "primeiro";
	char *str2 = "segundo";
	char *str3 = NULL;
	t_list *lista1 = ft_lstnew (str1); 
	t_list *lista2 = ft_lstnew (str2);
	t_list *lista3 = ft_lstnew (str3);
	printf("O conteudo da lista1 e %s\n", (char *) lista1 -> content);
	printf("O conteudo da lista2 e %s\n", (char *) lista2 -> content);
	printf("O conteudo da lista3 e %s\n", (char *) lista3 -> content);
	lista1 -> next = lista2;
	
	ft_lstadd_back (&lista1, lista3);
	printf("O conteudo da lista1 continua a ser: %s\n", (char *)lista1->content);
    printf("O conteudo do ultimo node e: %s\n", (char *)ft_lstlast(lista1)->content);
	
	
	free (lista1);
	free (lista2);
	free (lista3);
	return (0);
}