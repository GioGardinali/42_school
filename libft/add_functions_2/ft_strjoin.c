/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:16:01 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 18:36:08 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		str[index] = s1[index];
		index++;
	}
	while (*s2 != '\0')
	{
		str[index] = *s2++;
		index++;
	}
	str[index] = '\0';
	return (str);
}

/* int	main(void)
{
	char	*teste1 = "testando";
	char	*teste2 = "testando";
	ft_strjoin(teste1, teste2);
}
 */

/* Esta função ft_strjoin em C concatena duas strings s1 e s2 
para formar uma nova string resultante. Ela aloca memória 
suficiente para a nova string que conterá a concatenação 
das duas strings de entrada e, em seguida, copia os 
caracteres das strings s1 e s2 para a nova string. O 
resultado é uma nova string que contém a combinação das 
duas strings originais. Certifique-se de liberar a memória 
alocada para a nova string quando ela não for mais 
necessária para evitar vazamentos de memória.

Esta função é útil para combinar duas strings em uma única string, 
permitindo a construção de strings mais complexas a partir de 
partes individuais. Certifique-se de entender o funcionamento da 
alocação de memória, cópia de caracteres e o uso do caractere nulo 
de término para obter uma compreensão completa da função. */