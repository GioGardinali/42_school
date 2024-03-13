/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:23:21 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/08 19:40:43 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list *lst, t_element *element)
{
	if (!element)
		return ;
	if (lst->first)
	{
		element->next = lst->first;
		lst->first->prev = element;
	}
	else
		element->next = NULL;
	element->prev = NULL;
	lst->first = element;
	if (!lst->last)
		lst->last = element;
	lst->size++;
}
