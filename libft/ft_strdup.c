/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 16:08:00 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		index;
	int		len;

	if (*s == '\0')
	{
		copy = malloc (sizeof (char) * 1);
		copy[0] = '\0';
		return (copy);
	}
	len = ft_strlen (s);
	copy = malloc (sizeof (char) * len + 1);
	index = 0;
	while (s[index])
	{
		copy[index] = s[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}

/* #include <stdio.h>
#include<string.h>

int main()
{
	char *ptr;

	ptr = ft_strdup("DUPLICATA - testando a função");
	printf("%s\n", ptr);
	free(ptr);
	ptr = strdup("\nORIGINAL - testando a função");
	printf("%s\n", ptr);
	free(ptr);
	return (0);
} */

/* ft_strdup é uma função em linguagem C que cria uma cópia dinâmica
 de uma string s fornecida como argumento. Essa função aloca 
 memória dinamicamente para a cópia da string e retorna um ponteiro 
 para a nova string duplicada.

 if (*s == '\0')
 copy = malloc (sizeof (char) * 1); 
 copy[0] = '\0'; 
 return (copy);

A função verifica se a string s é uma string vazia (string nula). 
Se for o caso, ela aloca dinamicamente
uma nova string de tamanho 1 (para o caractere nulo) e retorna 
essa nova string. Isso é feito para garantir que a função trate 
corretamente strings vazias.
Se a string s for uma string vazia, a função aloca memória para 
uma nova string com tamanho 1 (para o caractere nulo de terminação
da string) usando a função malloc. Em seguida, o caractere nulo 
é atribuído à primeira posição da string e a função retorna essa 
nova string duplicada. */