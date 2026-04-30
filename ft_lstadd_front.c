/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:07:55 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 18:41:08 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(*new));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
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
