/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:29:58 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 19:06:46 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_myfunction (void *content)
{
	char *str = (char *)content;
	while (*str >= 'a' && *str <= 'z')
	{
		*str =  *str - 32;
		str++;
	}
}

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

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}

/* int main (void)
{
	char str1[] = "mundo";
	char str2[] = "ola";
	char str3[] = "mundo";

	t_list *lista1 = ft_lstnew (str1);
	t_list *lista2 = ft_lstnew (str2);
	t_list *lista3 = ft_lstnew (str3); 

	lista1 -> next = lista2;
	lista2 -> next = lista3;
	
	printf("O conteudo da lista 1 e %s\n" ,(char *)lista1 -> content);
	printf("O conteudo da lista 2 e %s\n" ,(char *)lista2 -> content);
	printf("O conteudo da lista 3 e %s\n" ,(char *)lista3 -> content);

	ft_lstiter (lista1, ft_myfunction);

	printf("O conteudo da lista 1 e %s\n" ,(char *)lista1 -> content);
	printf("O conteudo da lista 2 e %s\n" ,(char *)lista2 -> content);
	printf("O conteudo da lista 3 e %s\n" ,(char *)lista3 -> content);
	return (0);
} */