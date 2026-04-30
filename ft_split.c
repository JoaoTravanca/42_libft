/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtravanc <jtravanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:38:36 by jtravanc          #+#    #+#             */
/*   Updated: 2026/04/30 14:50:43 by jtravanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_words (const char *s, char c)
{
    size_t i;
    int count;
    
    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}

static void	ft_free_all(char **result, size_t j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
}

static void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;

    d = (unsigned char *) dest;
    s = (unsigned char *) src;

    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return ((void *) dest);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    char **result;
    size_t start;
    size_t j;

    if (!s)
		return (NULL);
    result = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
        {
            result[j] = malloc ((i - start + 1) * sizeof (char));
            if (!result[j])
            {
                ft_free_all (result, j);
                return (NULL);   
            }
            ft_memcpy (result[j],s + start, i - start);
            result[j][i - start] = '\0';
            j++;
        }
    }
    result[j] = NULL;
    return (result);
}


int main (void)
{
    char *src = "isto nao foi nada divertido xd";
    char c = ' ';
    char **result;
    int i;

    i = 0;

    result = ft_split (src, c);

    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}
/* 
FUNÇÃO split(s, c):

  1. SE s é NULL → retorna NULL

  2. words = count_words(s, c)
     result = malloc de (words + 1) ponteiros   ← +1 para o NULL final

  3. SE malloc falhou → retorna NULL

  4. i = 0
     ENQUANTO *s != '\0':

       a. Saltar todos os separadores c
          (avança s enquanto *s == c)

       b. SE chegámos ao fim da string → sair do loop

       c. Encontrar o fim da palavra atual
          start = s
          Avançar s enquanto *s != c E *s != '\0'
          len = s - start        ← comprimento da palavra

       d. result[i] = malloc de (len + 1) bytes
          SE malloc falhou → free_all(result, i) e retorna NULL

       e. memcpy(result[i], start, len)
          result[i][len] = '\0'  ← terminar a string

       f. i++

  5. result[i] = NULL             ← sentinela final obrigatória

  6. retorna result */