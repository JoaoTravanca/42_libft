/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:07:55 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/10 19:09:58 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
        return ;
	new -> next = *lst;
	*lst = new;
}

/* int main (void)
{
	t_list *list1;
	t_list *new;
	char *str = "RAndom";
	char *str2 = "idk";
	
	list1 = ft_lstnew(str);
	new = ft_lstnew(str2);
	printf("list 1 esta a apontar para %p\n", list1);
	printf("new esta a apontar para %p\n", new);

	ft_lstadd_front (&list1, new);
	printf("list 1 esta a apontar para %p\n", list1);
	printf("new esta a apontar para %p\n", new);
	free(list1);
	
	return (0);
} */
