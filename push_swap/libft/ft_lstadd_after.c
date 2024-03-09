/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:24:11 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 02:19:15 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_after(t_list *lst, t_element *ref, t_element *element)
{
	if (!element)
		return ;
	if (lst->last == ref)
		lst->last = element;
	element->next = ref->next;
	if (element->next)
		element->next->prev = element;
	ref->next = element;
	element->prev = ref;
	lst->size++;
}

/**
 * Adds a new element `el` after the reference element `ref` in the linked
 * list `lst`.
 * If `el` is NULL, the function returns immediately.
 * If `ref` is the last element of the list, `el` becomes the new last
 * element.
 * The `prev` and `next` pointers of `el` and the reference element are updated
 * accordingly.
 * The size of the list `lst` is incremented by 1.
 *
 * @param lst The linked list to add the element to.
 * @param ref The reference element after which the new element will be added.
 * @param element  The new element to be added.
 */