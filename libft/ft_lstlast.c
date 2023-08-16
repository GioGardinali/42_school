/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:24:11 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 15:45:08 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last_node;
	last_node = malloc(sizeof(t_list));
	
	while(lst)
	{
		last_node = lst->next;
	}
	return (last_node);
}


Tem que retornar o ultimo nó da lista