/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:13:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 18:27:17 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	index;

	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	index = 0;
	while (big[index] && len >= len_little)
	{
		if (big[index] == *little
			&& ft_strncmp(big + index, little, len_little) == 0)
			return ((char *)big + index);
		index++;
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;

ptr = ft_strnstr(largestring, smallstring, 5);
	printf("Será procurado dentro de large o texto que está na small: \n");
	printf("%s\n", ptr);
	free(ptr); 
	ptr = strnstr(largestring, smallstring, 5);
	printf("Será procurado dentro de large o texto que está na small: \n");
	printf("%s\n", ptr);
}  */

/* A função ft_strnstr busca uma substring little em uma string maior 
big, mas limitando a busca aos primeiros len caracteres de big. 
Se a substring for encontrada, a função retorna um ponteiro para 
a posição em que a substring foi encontrada em big. Caso contrário, 
ela retorna NULL. Essa função é útil quando você precisa buscar uma 
substring em uma parte específica de uma string maior ou quando 
precisa limitar o escopo da busca para evitar acessar áreas não 
alocadas de memória.

if (big[index] == *little && ft_strncmp(big + index, little, len_little) == 0) return ((char *)big + index);: Dentro do loop, a função compara o caractere atual de big (big[index]) com o primeiro caractere da substring little (*little).
Se houver uma correspondência, a função utiliza a função ft_strncmp 
para comparar os próximos len_little caracteres de big a partir da 
posição index com a substring little. Se a comparação for igual a 
zero, significa que a substring little foi encontrada em big a 
partir da posição index. Nesse caso, a função retorna um ponteiro 
para a posição em que a substring foi encontrada em big. */