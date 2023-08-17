/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:23:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/17 16:27:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* lst: O endereço de um ponteiro para o primeiro link de
uma lista.
novo: O endereço de um ponteiro para o nó a ser
adicionado à lista.

Adiciona o nó 'novo' no início da lista
Eu atribuo o endereço do ponteiro new para o prinmeiro link
( o lst), e depois eu atribuo o nó new para o primeiro.
Para isso, eu atribuo isso ao lst que é o primeiro da lista. */

/* new->next = *lst;: O campo next do novo elemento (new) está sendo atribuído 
ao valor que *lst (ponteiro para o primeiro elemento da lista) está 
apontando. Isso faz com que o novo elemento aponte para o que era o 
primeiro elemento da lista antes de adicionar o novo elemento.

*lst = new;: O ponteiro *lst, que originalmente apontava para o primeiro 
elemento da lista, agora é atualizado para apontar para o novo elemento 
(new). Isso faz com que o novo elemento se torne o primeiro elemento da 
lista. */