/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:30:17 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/05 18:30:31 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_myfunction(void *content)
{
	char	*str;
	int	i;
	char *new;

	str = (char *) content;
	new = ft_strdup(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			new[i] = str[i] - 32;
		i++;
	}
	
	return ((void *) new);
}

static void	ft_del(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

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
    t_list *lista1 = ft_lstnew(ft_strdup("Hello"));
    t_list *lista2 = ft_lstnew(ft_strdup("World"));
    t_list *lista3 = ft_lstnew(ft_strdup("12345"));
    t_list *new;
    t_list *tmp;

    lista1->next = lista2;
    lista2->next = lista3;

    printf("O conteudo da lista 1 e %s\n", (char *) lista1->content);
    printf("O conteudo da lista 2 e %s\n", (char *) lista2->content);
    printf("O conteudo da lista 3 e %s\n", (char *) lista3->content);

    new = ft_lstmap(lista1, ft_myfunction, ft_del);
    tmp = new;
    while (tmp)
    {
        printf("O elemento da lista passou a ser %s\n", (char *) tmp->content);
        tmp = tmp->next;
    }

    printf("----------------------------------------\n");
    printf("Teste para saber se a lista esta intacta\n");
    printf("O conteudo da lista 1 e %s\n", (char *) lista1->content);
    printf("O conteudo da lista 2 e %s\n", (char *) lista2->content);
    printf("O conteudo da lista 3 e %s\n", (char *) lista3->content);

    printf("--- TESTES ---\n");
    new = ft_lstmap(NULL, ft_myfunction, ft_del);
	if (new == NULL)
    	printf("Lista NULL:    OK\n");
	else
    	printf("Lista NULL:    ERRO\n");

	new = ft_lstmap(lista1, NULL, ft_del);
	if (new == NULL)
    	printf("Funcao NULL:   OK\n");
	else
    	printf("Funcao NULL:   ERRO\n");

	new = ft_lstmap(lista1, ft_myfunction, NULL);
	if (new == NULL)
    	printf("Del NULL:      OK\n");
	else
    	printf("Del NULL:      ERRO\n");

    ft_lstclear(&new, ft_del);
    ft_lstclear(&lista1, ft_del);
    return (0);
}
