/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:05:53 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/08 19:01:46 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//correta conforme tester
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	index = 0;
	if (dest_len < size)
	{
		while ((index + dest_len) < (size - 1) && src[index])
		{
			dst[index + dest_len] = src[index];
			index++;
		}
		dst[index + dest_len] = '\0';
	}
	return (dest_len + src_len);
}

//incorreta conforme tester
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_index;

	dest_len = ft_strlen(dst);
	src_index = 0;
	while ((dest_len + src_index + 1) < size && src[src_index])
	{
		dst[dest_len + src_index] = src[src_index];
		src_index++;
	}
	dst[dest_len + src_index] = '\0';
	while (src[src_index])
		src_index++;
	if (dest_len >= size)
	{
		return (src_index + size);
	}
	return (dest_len + size);
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