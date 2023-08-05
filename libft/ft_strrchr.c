/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:09:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 19:05:19 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len && *(s + len) != (char)c)
		len--;
	if (*(s + len) == (char) c)
		return ((char *)(s + len));
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*teste = "testanado";
	char		*ptr;
	char		*ptr2;

	ptr = ft_strrchr(teste, 'a');
	printf("DUPLICATA - Será procurado dentro de teste o o que passei de parametro: \n");
	printf("%s\n", ptr);
	ptr2 = strrchr(teste, 'a');
	printf("ORIGINAL - Será procurado dentro de teste o o que passei de parametro: \n");
	printf("%s\n", ptr);
} */

/* a função ft_strrchr procura a última ocorrência do caractere c na 
string s percorrendo a string de trás para frente. Ela é igual a strchr que 
lê a primeira ocorrencia. Se encontrar o caractere, ela retorna um ponteiro para a posição dessa ocorrência 
na string. Caso contrário, ela retorna NULL para indicar que o 
caractere não foi encontrado. Essa função é útil quando você 
precisa localizar a última ocorrência de um caractere específico 
em uma string. */