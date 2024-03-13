/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:26:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/08 19:55:51 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst, void (*del)(void*))
{
	t_element	*element;
	t_element	*nxt_element;

	if (!lst)
		return ;
	element = lst->first;
	while (element)
	{
		nxt_element = element->next;
		ft_lstdelone(lst, element, del);
		element = nxt_element;
	}
	free(lst);
}
