/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:41:09 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 19:07:21 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew (void *content)
{
	t_list *new;
	new = malloc (sizeof(*new));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/* int main (void)
{
	char *str1 = "um";
	char *str2 = "dois";
	char *str3 = "tres";
	t_list *lista1 = ft_lstnew (str1);
	t_list *lista2 = ft_lstnew (str2);
	t_list *lista3 = ft_lstnew (str3);
	lista1 -> next = lista2;
	lista2 -> next = lista3;
	printf("O conteudo da lista1 e %s\n", (char *) lista1 ->content);
	printf("O conteudo da lista2 e %s\n", (char *) lista2 ->content);
	printf("O conteudo da lista3 e %s\n", (char *) lista3 ->content);
	t_list *new = ft_lstlast (lista1);
	printf("O conteudo da ultima lista e %s\n", (char *) new ->content);
	free (lista1);
	free (lista2);
	free (lista3);
	return (0);
} */