/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:23:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 15:22:20 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* Essa função conta quantos nós temos dentro da lista encadeada
que está na lst.
Checamos se a lista encadeada lst é vazia, pois retornamos NULL
por estar vazia.
While vai rodar até lst ser NULL.
Eu coloco o size++ antes, pois ele já vai direto para o 1 nó,
contabilizando, apesar que tanto em cima quanto embaixo, não
teria problema para implementar o size++.
(aparementemente colocamos size++ antes. pois ele já ta pegando
o valor do primeiro nó e por isso o size++ vem antes). */
