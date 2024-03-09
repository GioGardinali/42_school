/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:26:14 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/08 19:04:44 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_element_first(t_list *lst, t_element *element)
{
	lst->first = element->next;
	if (lst->first)
		lst->first->prev = NULL;
}

static void	ft_element_last(t_list *lst, t_element *element)
{
	lst->last = element->prev;
	if (lst->last)
		lst->last->next = NULL;
}

void	ft_lstdelone(t_list *lst, t_element *element, void (*del)(void*))
{
	if (!element)
		return ;
	if (lst)
	{
		if (element != lst->first && element != lst->last)
		{
			element->prev->next = element->next;
			element->next->prev = element->prev;
		}
		else
		{
			if (element == lst->first)
				ft_element_first(lst, element);
			if (element == lst->last)
				ft_element_last(lst, element);
		}
	}
	del(element->content);
	free(element);
	lst->size--;
}
/**
 * @brief Deletes a single element from a linked list.
 *
 * This function deletes the specified element `lst` from the linked list.
 * The content of the element is deleted using the provided deletion function
 * `del`.
 *
 * @param lst The element to be deleted.
 * @param del The function used to delete the content of the element.
 *            If NULL, the content will not be deleted.
 */