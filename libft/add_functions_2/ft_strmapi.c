/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:58 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 21:12:41 by gigardin         ###   ########.fr       */
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

/* #include <stdio.h>
// Função que converte letras minúsculas em maiúsculas
void	*convert_to_uppercase(unsigned int index, char *character)
{
	if (*character >= 'a' && *character <= 'z')
	{
		*character = *character - 32;
	}
}

int main(void)
{
	char			str[] = "Hello, world!";
	unsigned int	quantidade = ft_strlen(str);
	// Chamando ft_striteri para percorrer a string e converter letras 
	minúsculas em maiúsculas
	ft_strmapi(str, convert_to_uppercase);
	// Imprimindo a string após a conversão
	printf("String após a conversão: %s\n", str);
	return (0);
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