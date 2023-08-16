/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:23:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 16:28:41 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* Tá dando merda isso aqui (Arrumar) */
/* #include	<stdio.h>

int	main(void)
{
	t_list	*new_node;
	t_list	*current;
	t_list	*current2;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = 45;
	new_node->next = NULL;
	current = malloc(sizeof(t_list));
	if (!current)
		return (NULL);
	current->content = 98;
	current->next = NULL;
	new_node->next = current;
	current2 = malloc(sizeof(t_list));
	if (!current2)
		return (NULL);
	current2->content = 120;
	current2->next = NULL;
	current->next = current2;

	printf("%d \n", ft_lstsize(new_node));
} */

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
