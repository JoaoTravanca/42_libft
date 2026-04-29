/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:35:39 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/29 15:30:58 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	l;
	void			*origin;

	str = (unsigned char *)s;
	l = (unsigned char *)c;
	origin = s;
	while (n)
	{
		*str = l;
		str++;
		n--;
	}
	return ((void *) origin);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && size > ((size_t)-1 / nmemb))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/* #include <stdio.h>

int main (void)
{
    int *arr;
    size_t  i;
    
    arr = (int *) ft_calloc (5, sizeof(int));

    i = 0;
    while (i < 5)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }
    printf("-----------------------\n");

    i = 0;

    while (i < 5)
    {
        arr[i] = i + 1;
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }
    free (arr);
    return (0);
} */