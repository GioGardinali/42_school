/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:25:49 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/08 19:34:13 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *lst, t_element *element)
{
	if (!element)
		return ;
	if (lst->last)
		lst->last->next = element;
	element->prev = lst->last;
	element->next = NULL;
	lst->last = element;
	if (!lst->first)
		lst->first = element;
	lst->size++;
}
