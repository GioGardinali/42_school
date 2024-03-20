/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 02:21:17 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/15 05:25:21 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_el_is_first(t_list *lst, t_element *element)
{
	lst->first = element->next;
	if (lst->first)
		lst->first->prev = NULL;
}

static void	ft_el_is_last(t_list *lst, t_element *element)
{
	lst->last = element->prev;
	if (lst->last)
		lst->last->next = NULL;
}

/**
 * Removes and returns an element from a linked list at the specified index.
 *
 * @param lst The linked list from which to remove the element.
 * @param index The index of the element to be removed.
 * @return The removed element, or NULL if the index is out of range.
 */
t_element	*ft_lstpop(t_list *lst, int index)
{
	t_element	*element;

	element = ft_lstpickel(lst, index);
	if (!element)
		return (NULL);
	if (element != lst->first && element != lst->last)
	{
		element->prev->next = element->next;
		element->next->prev = element->prev;
	}
	else
	{
		if (element == lst->first)
			ft_el_is_first(lst, element);
		if (element == lst->last)
			ft_el_is_last(lst, element);
	}
	element->next = NULL;
	element->prev = NULL;
	lst->size--;
	return (element);
}
