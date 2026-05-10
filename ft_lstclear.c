/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:29:32 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/10 19:10:59 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static void	ft_del(void *content)
{
	(void) content;
} */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)-> next;
		del ((*lst)-> content);
		free (*lst);
		*lst = temp;
	}
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