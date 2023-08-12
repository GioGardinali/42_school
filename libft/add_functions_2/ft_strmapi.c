/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:58 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/12 00:35:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*p_result;

	if (!s)
		return (NULL);
	p_result = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!p_result)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		p_result[count] = f(count, s[count]);
		count++;
	}
	p_result[count] = '\0';
	return (p_result);
}

/* char to_upper(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

#include <stdio.h>

int main(void)
{
    const char *text = "hello, world!";
    char *result;

    result = ft_strmapi(text, to_upper);


        printf("Original: %s\nModified: %s\n", text, result);
        free(result); // Liberar a memória alocada
    return 0;
} */

/* Esta é a declaração da função ft_strmapi. Ela recebe dois argumentos:

s: Um ponteiro constante para a string na qual a função será aplicada.
f: Um ponteiro para uma função que será aplicada a cada caractere 
da string. Essa função deve receber dois argumentos: 
um unsigned int representando o índice do caractere na string e 
um char representando o caractere em si.

A função ft_strmapi cria uma nova string que contém os resultados 
da aplicação de uma função f a cada caractere da string s. 
O índice do caractere na string s é passado como o primeiro 
argumento para a função f, permitindo que a função f realize 
operações personalizadas em cada caractere. Essa função é útil 
quando você deseja transformar ou modificar cada caractere de 
uma string de acordo com algum critério específico. Certifique-se 
de liberar a memória alocada para a nova string após o uso para 
evitar vazamentos de memória. */