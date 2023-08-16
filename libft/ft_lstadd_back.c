/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:25:49 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 17:11:53 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/* Ele quer que adicione o nó (next) do new no final
da lista.
Eu aplico a ft_lstlast no primeiro nó lst, e mando ele passar até c
hegar no final, ao chegar no final, eu passo o valor do nó new
dentro do ultimo link do nó no lst. */