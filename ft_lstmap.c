/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanca <jtravanca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:30:17 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/02 17:57:21 by jtravanca        ###   ########.fr       */
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

int main(void)
{

    t_list *original = NULL;
    ft_lstadd_back(&original, ft_lstnew(strdup("hello")));
    ft_lstadd_back(&original, ft_lstnew(strdup("world")));
    ft_lstadd_back(&original, ft_lstnew(strdup("42")));

    print_list(original, "original");


    t_list *mapped = ft_lstmap(original, to_upper, del);

    print_list(mapped,   "mapped  ");

 a
    print_list(original, "original após map");


    ft_lstclear(&original, del);
    ft_lstclear(&mapped,   del);

    return (0);
}

void    print_list(t_list *lst, const char *label)
{
    printf("%s: ", label);
    while (lst)
    {
        printf("[%s]", (char *)lst->content);
        if (lst->next) printf(" -> ");
        lst = lst->next;
    }
    printf("\n");
}