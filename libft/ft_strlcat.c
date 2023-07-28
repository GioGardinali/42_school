/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:05:53 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/27 18:20:53 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size > dest_length)
	{
		return (src_length + dest_length);
	}
	while (src[i] != '\0' && (dest_length + 1) < size)
	{
		dst[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dst[dest_length] = '\0';
	return (src_length + size);
}

/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>


int	main()
{
	// char			str0[50] = "Ola\0";
	char			str1[50]= "Ola\0";
	char			str2[] = "Concatenando 1";
	// unsigned int	tamanho1;
	unsigned int	tamanho2;

	// tamanho1 = ft_strlcat(str0, str2, 10);
	tamanho2 = strlcat(str1, str2, 10);
	// printf("String final: %s, Tamanho: %d", str0, tamanho1);
	printf("\nString final: %s, Tamanho: %d", str1, tamanho2);
} */

/* para compilar com o strlcat original, coloque: cc ft_strlcat.c -lbsd

A função strlcat () anexa a string src terminada em NUL ao final 
de dst . Ele acrescentará no máximo tamanho - strlen(dst) - 1 bytes,
 encerrando o resultado com NUL.

 As funções strlcpy () e strlcat () retornam o comprimento 
 total da string que tentaram criar.
  Para strlcat () isso significa o comprimento inicial de dst 
  mais o comprimento de src . Embora isso possa parecer um 
  pouco confuso, foi feito para simplificar a detecção de 
  truncamento. */