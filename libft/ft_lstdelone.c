/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:26:14 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:06 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
	return ;
}

/* Está função vai ser responsável por realizar uma limpeza
dentro do content do nó que vc passou.
Assim, ele tráz a função Del e depois dá um free para
liberar espaço na memória. */