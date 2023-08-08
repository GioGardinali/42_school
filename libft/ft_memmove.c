/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/07 22:20:09 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	if (p_dest > p_src)
	{
		while (n--)
			p_dest[n] = p_src[n];
		return (dest);
	}
	ft_memcpy(p_dest, p_src, n);
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TESTA";
	char	teste1[] = "testando";
	char	origem1[] = "TESTA";
	printf("\nDUPLICATA \n antes da mudança: %s", teste);
	ft_memmove(teste, origem, 5);
	printf("\nvamos ver a mudança: %s", teste);
	printf("\nORIGINAL \n antes da mudança: %s", teste1);
	memmove(teste1, origem1, 5);
	printf("\nvamos ver a mudança: %s", teste1);
} */
/*  A função ft_memmove é uma função em linguagem C que realiza a 
cópia de n bytes de uma região de memória apontada por src para
 outra região de memória apontada por dest. A diferença chave 
 entre ft_memmove e ft_memcpy (ou memcpy) é que ft_memmove trata 
 corretamente situações onde as duas regiões de memória podem se 
 sobrepor, garantindo uma cópia correta e segura mesmo nessas 
 condições.
 char *p_dest; e char *p_src;: Duas variáveis ponteiro são 
 declaradas, p_dest e p_src, que serão usadas para percorrer os 
 bytes das regiões de memória dest e src, respectivamente. Elas são 
 declaradas como ponteiros para char para garantir que o conteúdo 
 seja tratado como bytes individuais, independentemente do tipo de 
 dado original. Diferente do memcpy que usa apenas 1 ponteiro, para
  realizar alteração
  Veja aqui mais explicação sobre o memmove e memcpy:
  https://github.com/GioGardinali/informacoes_valiosas/blob/main/1_funcoes_de_manipulacao_de_memoria_pt_1_memcpy_vs_memmove.md */