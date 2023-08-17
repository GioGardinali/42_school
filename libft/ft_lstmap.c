/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:27:22 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/17 20:02:12 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
			ft_lstclear(&node, (*del));
		else
			ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

/* Itera a lista 'lst' e aplica a função'f' no conteúdo de 
cada nó. Cria um novo lista resultante das sucessivas 
aplicações de a função 'f'. A função 'del' é usada para
exclua o conteúdo de um nó, se necessário. */

/* A função ft_lstmap é usada para criar uma nova lista encadeada aplicando 
uma função (f) a cada elemento da lista original (lst). A função f é usada 
para criar o conteúdo de cada novo elemento da lista resultante. Além disso, 
a função del é usada para deletar o conteúdo de cada elemento da nova lista 
em caso de falha na alocação de memória durante a criação dos novos elementos.

 (new_lst) e um nó temporário (node) que será usado para criar novos elementos 
 na nova lista. */
/*  new_lst = NULL;: Inicializa o ponteiro da nova lista como nulo. Isso será 
 usado para construir a nova lista a partir do zero.

while (lst): Inicia um loop while que percorre todos os elementos da lista 
original.

node = ft_lstnew((*f)(lst->content));: Cria um novo nó (node) usando a 
função ft_lstnew. A função f é aplicada ao conteúdo do nó atual da 
lista original (lst->content) para criar o conteúdo do novo nó.

if (!node) ft_lstclear(&node, (*del));: Verifica se a criação do novo 
nó (node) falhou (pode ter havido um erro de alocação de memória). Se isso 
acontecer, a função ft_lstclear é chamada para liberar a memória alocada 
para o nó (node) e para todos os nós criados até agora na nova lista 
(new_lst). A função del é usada para deletar o conteúdo desses nós.

else ft_lstadd_back(&new_lst, node);: Caso contrário, se o novo nó foi 
criado com sucesso, ele é adicionado ao final da nova lista usando a função 
ft_lstadd_back.

lst = lst->next;: Move o ponteiro lst para o próximo elemento da lista 
original, avançando no loop.

return (new_lst);: Retorna o ponteiro para a nova lista resultante, que 
foi construída aplicando a função f a cada elemento da lista original. */