/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:46:41 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 22:00:22 by jtravanca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_lstsize(t_list *lst)
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

 int main (void)
{
	t_list *first;
	t_list *second;
	char *str = "Ola";
	char *str2 = "Mundo";

	first = ft_lstnew(str);
	second = ft_lstnew(str2);

	first -> next = second;

	printf("O tamanho da lista e %d", ft_lstsize (first));
	free(first);
	free(second);
	return (0);
} 