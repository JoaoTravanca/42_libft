/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:35:39 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/08 13:17:52 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > ((size_t)-1 / size))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

/* #include <stdio.h>

int main(void)
{
    int     *arr;
    size_t  i;

    arr = (int *) ft_calloc(5, sizeof(int));
    if (!arr)
        return (1);
    i = 0;
    while (i < 5)
    {
        printf("arr[%zu] = %d\n", i, arr[i]); 
        i++;
    }
    free(arr);

    arr = (int *) ft_calloc(0, 0);
    if (!arr)
        printf("ft_calloc(0,0) retornou NULL\n");
    else
        printf("ft_calloc(0,0) retornou ponteiro valido\n");
    free(arr);

    arr = (int *) ft_calloc((size_t)-1, sizeof(int));
    if (!arr)
        printf("overflow corretamente retornou NULL\n");

    return (0);
} */