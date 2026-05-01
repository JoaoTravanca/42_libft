/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:30:17 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/01 18:04:44 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_myfunction(void *content)
{
	char	*str;

	str = (char *) content;
	while (*str >= 'a' && *str <= 'z')
	{
		*str =  *str - 32;
		str++;
	}
}

static void	ft_del(void *content)
{
	free(content);
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
	char *str1 = "OLA";
	char *str2 = "mundo";
	char *str3 = "diversao";

	t_list *lista1 = ft_lstnew(str1);
	t_list *lista2 = ft_lstnew(str2);
	t_list *lista3 = ft_lstnew(str3);
	t_list *new = ft_lstmap (lista1, ft_myfunction, ft_del);
	lista1->next = lista2;
	lista2->next = lista3;
	printf("conteudo da lista1 %s", (char *) lista1 -> conteudo);
	printf("conteudo da lista2 %s", (char *) lista2 -> conteudo);
	printf("conteudo da lista3 %s", (char *) lista3 -> conteudo);

	while (*new != NULL)
	{
		printf("conteudo da lista new %s", new -> conteudo);
		new = new -> next;
	}

	return (0);	
}