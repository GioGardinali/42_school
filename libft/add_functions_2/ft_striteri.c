/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:18:46 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 21:08:47 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		count;

	count = 0;
	while (s[count] != '\0')
	{
		f(count, s + count);
		count++;
	}
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
	ft_striteri(str, convert_to_uppercase);
	// Imprimindo a string após a conversão
	printf("String após a conversão: %s\n", str);
	return (0);
} */

/* Os iteradores são uma abstração poderosa, pois permitem que você 
percorra coleções de dados de maneira uniforme, independentemente do tipo 
de estrutura de dados subjacente. Isso torna o código mais flexível, legível e 
fácil de manter, e também reduz a probabilidade de erros ao percorrer 
elementos da coleção.

Em linguagens mais modernas, como C++, Python ou Java, os iteradores são 
incorporados nas próprias estruturas de dados e podem ser acessados 
de maneira mais simplificada, por meio de iterações com for-each ou outros 
mecanismos específicos. */

/* Diferenças entre ft_strmapi e ft_striteri
Função ft_strmapi:

Propósito: A função ft_strmapi aplica uma função f a cada caractere da string s e 
retorna uma nova string que contém os resultados da aplicação dessa função.
Assinatura: char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
Parâmetros:
s: Um ponteiro constante para a string na qual a função será aplicada.
f: Um ponteiro para uma função que será aplicada a cada caractere da string s.
Essa função deve receber dois argumentos: um unsigned int representando o índice 
do caractere na string e um char representando o caractere em si.
Retorno: A função retorna um ponteiro para a nova string resultante que contém os 
resultados da aplicação da função f em cada caractere da string s.
Função ft_striteri:

Propósito: A função ft_striteri aplica uma função f a cada caractere da string s, 
mas sem criar uma nova string. Ela realiza uma iteração na string e a função f é 
aplicada diretamente aos caracteres na string.
Assinatura: void ft_striteri(char *s, void (*f)(unsigned int, char*))
Parâmetros:
s: Um ponteiro para a string na qual a função será aplicada.
f: Um ponteiro para uma função que será aplicada a cada caractere da string s. 
Essa função deve receber dois argumentos: um unsigned int representando o índice do 
caractere na string e um ponteiro char* para o caractere em si.
Retorno: A função não possui retorno, pois ela aplica a função f diretamente na string s. */