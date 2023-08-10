/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:05:05 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 21:04:29 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (src[index] && index + 1 < size)
	{
		dst[index] = src[index];
		index++;
	}
	if (size > 0)
		dst[index] = '\0';
	index = ft_strlen(src);
	return (index);
}

/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>


int	main()
{
	char			str0[50] = "Ola\0";
	// char			str1[50]= "Ola\0";
	char			str2[] = "Concatenando 1";
	unsigned int	tamanho1;
	// unsigned int	tamanho2;

	tamanho1 = ft_strlcpy(str0, str2, 14);
	// tamanho2 = strlcpy(str1, str2, 10);
	printf("String final: %s, Tamanho: %d", str0, tamanho1);
	// printf("\nString final: %s, Tamanho: %d", str1, tamanho2);
} */

/* para compilar com o strlcpy original, coloque: cc ft_strlcpy.c -lbsd

A função ft_strlcat concatena uma string src em outra string dst,
garantindo que o resultado final não exceda o tamanho máximo size
do buffer de destino dst. Se o buffer de destino tem espaço
suficiente para acomodar a concatenação completa, a função copia
todos os caracteres da string de origem src para a string de destino
dst. Se o tamanho do buffer de destino não permite a concatenação 
completa, a função copia o máximo possível de caracteres e garante 
que a string resultante seja corretamente finalizada com o caractere
nulo de terminação ('\0'). A função também retorna o tamanho da 
string que teria sido criada se não houvesse restrição de tamanho. 
Essa função é útil para concatenar strings de forma segura, 
garantindo que não ocorram estouros de buffer durante a concatenação. */