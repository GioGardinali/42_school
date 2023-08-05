/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:03:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 14:26:47 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = c;
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	teste[] = "testando";
	char	teste1[] = "testando";
	printf("\nantes da mudança: %s", teste);
	ft_memset(teste, 'R', 4);
	printf("\nDUPLICADA  vamos ver a mudança: %s", teste);
	memset(teste1, 'R', 4);
	printf("\nORIGINAL - vamos ver a mudança: %s", teste1);
} */

/* A função memset vai pegar os bytes de memoria de uma array e 
realizar mudanças dentro de cada byte que é passado pelo
int c da função. Ela vai preencher a quantidade de byes que o n passar para ela.
Caso não for nada, ela retorna a propria string igual, mas se tiver algum n bytes, ela mudará.
Tipo, passo int 'R' com n = 3, ela colocará dentro de cada byte até preencher 3 deles e retorna o espaço
da memoría modificado com a nova conviguração.
Ela pode ser usada para inicializar blocos de memória, definindo todos os bytes para um 
valor específico.
A função BZero que hoje é obsoleta, ela é feita com o memset.
OBS: usamos type casting para modificar a atribuição de valor de S, para ficar igual ao ptr, 
que é um unsigned char */