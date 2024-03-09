/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:23:42 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 02:36:16 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int			size;
	t_element	*element;

	size = 0;
	if (!lst)
		return (size);
	element = lst->first;
	while (element)
	{
		element = element->next;
		size++;
	}
	return (size);
}

/**
 * @brief Counts the number of elements in a linked list.
 *
 * This function counts the number of elements in the linked list pointed to
 * by `lst`.
 *
 * @param lst The pointer to the the list.
 * @return The number of elements in the list.
 */