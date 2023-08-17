/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:27:22 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 20:10:54 by gigardin         ###   ########.fr       */
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