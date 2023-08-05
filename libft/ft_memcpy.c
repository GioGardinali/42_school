/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:26 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 14:01:49 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer;

	if (dest == src || !n)
		return (dest);
	buffer = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (buffer);
}

/* #include <stdio.h>
#include "string.h"

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TESTA";
	char	teste2[] = "testando";
	char	origem2[] = "TESTA"; 
	printf("\nDUPLICATA \n antes da mudança: %s", teste);
	ft_memcpy(teste, origem, 5);
	printf("\nvamos ver a mudança: %s", teste);
	printf("\nORIGINAL \n antes da mudança: %s", teste2);
	memcpy(teste2, origem2, 5);
	printf("\nvamos ver a mudança: %s", teste2);
} */

/* Em resumo, a função ft_memcpy copia n bytes da região de memória
apontada por src para a região de memória apontada por dest. 
Ela lida com sobreposição de memória e evita a cópia desnecessária 
quando src e dest apontam para a mesma região. O valor de retorno 
da função é o ponteiro para a região de memória de destino.
Porém, é possível realizar caca com o memcpy, ele pode cagar 
na região de memoria que ele está alterando, prejudicando a saída dos array.
Veja aqui: https://github.com/GioGardinali/informacoes_valiosas/blob/main/1_funcoes_de_manipulacao_de_memoria_pt_1_memcpy_vs_memmove.md
 */