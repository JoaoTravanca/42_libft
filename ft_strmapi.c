/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:44 by jtravanc          #+#    #+#             */
/*   Updated: 2026/05/08 13:52:26 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static char ft_test(unsigned int i, char c)
{
    if (i % 2 == 0)
    {
        if (c >= 'a' && c <= 'z')
            return (c - 32);
    }
    else
    {
        if (c >= 'A' && c <= 'Z')
            return (c + 32);
    }
    return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	new = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* int main(void)
{
    char *str = "abcdef";
    char *resultado;

    printf("Original: %s\n", str);
    resultado = ft_strmapi(str, ft_test);

    if (resultado)
    {
        printf("Resultado: %s\n", resultado);
        free(resultado);
    }

    return (0);
} */