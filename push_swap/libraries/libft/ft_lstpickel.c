/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpickel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 02:04:19 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/15 05:26:25 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns an element from a linked list at the specified index.
 *
 * @param lst The linked list from which to return the element.
 * @param index The index of the element to be returned.
 * 			If negative, the element is returned from the end of the list.
 * 			If the absolute value of the index is greater than the size of the
 * 			list, NULL is returned.
 * @return The element at the specified index, or NULL if the index is out of
 *         range.
 */
t_element	*ft_lstpickel(t_list *lst, int index)
{
	t_element	*element;

	if ((!lst) || (index < 0 && - index > (int)lst->size)
		|| (index >= 0 && index + 1 > (int)lst->size))
		return (NULL);
	if (index < 0)
	{
		element = lst->last;
		while (++index)
			element = element->prev;
	}
	else
	{
		element = lst->first;
		while (index--)
			element = element->next;
	}
	return (element);
}
