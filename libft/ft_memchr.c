/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:11:04 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 22:12:07 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char *teste2;
	char *teste3;
	char	*teste = "testando";
	printf("\nantes da mudança: %s", teste);
	teste2= ft_memchr(teste, 'a', 5);
	printf("\nvamos ver a mudança: %s", teste2);
		printf("\nantes da mudança: %s", teste);
	teste3= ft_memchr(teste, 'a', 5);
	printf("\nvamos ver a mudança: %s", teste3);
} */

/* A função vai pegar um array, encontrar o que colocamos dentro do int
dentro deste array que passamos e rodar até a quantidade de vezes que 
solicitamos. Assim quando falamos que queremos buscar o 'a', dentro de testando,
porém só pode rodar até o index 3, ele não vai encontrar e 
enviará um retorno de NULL.
Mas se eu passar um size_t de 5 para ele rodar até o index 5, 
ele vai encontrar o 'a' dentro de testando e irá me retornar 
tudo que vem após ele + ele (ando).

OBS: para igualar as transferencias de dados, tipo um int para um char,
temos que atribuir o type casting
*/