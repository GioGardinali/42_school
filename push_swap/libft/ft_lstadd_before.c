/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_before.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 02:21:17 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 02:22:47 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_before(t_list *lst, t_element *ref, t_element *element)
{
	if (!element)
		return ;
	if (lst->first == ref)
		lst->first = element;
	element->prev = ref->prev;
	if (element->prev)
		element->prev->next = element;
	ref->prev = element;
	element->next = ref;
	lst->size++;
}

/**
 * Adds a new element `el` before the reference element `ref` in the linked
 * list `lst`.
 * If `el` is NULL, the function returns immediately.
 * If `ref` is the first element of the list, `el` becomes the new first
 * element.
 * The `prev` and `next` pointers of `el` and the reference element are updated
 * accordingly.
 * The size of the list `lst` is incremented by 1.
 *
 * @param lst The linked list to add the element to.
 * @param ref The reference element before which the new element will be added.
 * @param element  The new element to be added.
 */