/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:12:06 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 13:38:11 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			index;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (p_s1[index] != p_s2[index])
			return ((int)(p_s1[index] - p_s2[index]));
		index++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*teste;
	char	*teste2;
	int		resultado;

	teste = "testAndo";
	teste2 = "testando";
	resultado = ft_memcmp(teste, teste2, 5);
	printf("DUPLICATA - saindo o resultado da diferença entre as duas strings: 
	\n");
	printf("%d\n\n", resultado);
	resultado = memcmp(teste, teste2, 5);
	printf("ORIGINAL - saindo o resultado da diferença entre as duas strings: 
	\n");
	printf("%d", resultado);
} */

/* A função vai pegar dois arrays de memória e irá comparar cada index do
 array até a quantidade de vezes que limitamos no parâmetro 'size_t n'.
Assim, caso ambos os arrays estiverem 100% iguais, irá retornar 0, caso ao 
contrário, irá retornar a diferença do 1º array - 2 º array.
p_s1 e p_s2 são atribuídos aos endereços das regiões de memória 
apontadas por s1 e s2, respectivamente. Isso é feito para que 
possamos percorrer os bytes individuais nas regiões de memória.

OBS: para igualar as transferencias de dados, tipo um const void para um 
unsigned char, temos que atribuir o type casting
*/
