/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:26:43 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 19:36:20 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t_node;

	while (*lst)
	{
		t_node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(t_node, del);
	}
}

/* Exclui e libera o nó fornecido e cada
sucessor desse nó, usando a função 'del' e free(3).
Finalmente, o ponteiro para a lista deve ser definido como
NULL. */
/* while (*lst): Inicia um loop while que continua enquanto o 
ponteiro da lista *lst não for nulo. Isso percorre a lista 
até que todos os elementos tenham sido processados.

t_node = *lst;: Atribui o valor de *lst (o primeiro 
elemento da lista) à variável t_node.

*lst = (*lst)->next;: Atualiza o ponteiro *lst para 
apontar para o próximo elemento da lista. Isso move o 
ponteiro da lista para o próximo elemento, preparando-o 
para o próximo ciclo do loop. */