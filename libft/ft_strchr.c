/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:08:10 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 22:49:00 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == (unsigned char)c)
			return ((char *)(s - 1));
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*teste = "testando";
	char		*ptr;
	char		*ptr2;

	ptr = ft_strchr(teste, 'a');
	ptr2 = strchr(teste, 'a');
	printf("DUPLICATA - Será procurado dentro de teste o o que passei de parametro: \n");
	printf("%s", ptr);
	printf("ORIGINAL - Será procurado dentro de teste o o que passei de parametro: \n");
	printf("%s", ptr2);
} */

/* ft_strchr é uma função em linguagem C que busca um caractere 
específico c em uma string s e retorna um ponteiro para a primeira 
ocorrência desse caractere na string. Se o caractere não for 
encontrado, a função retorna um ponteiro nulo (NULL).
ela lembra a lógica da memchr, porém a gente não precisa criar um 
ponteiro para reliazar a mudança nos bytes de memória e ele já é 
definido como *s, ou seja, uma string que vai rodar até '\0' */
