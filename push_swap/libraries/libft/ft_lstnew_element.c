/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:22:47 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 02:32:03 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_element	*ft_lstnew_element(void *content)
{
	t_element	*new_element;

	new_element = ft_calloc(1, sizeof(t_element));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	return (new_element);
}

/**
 * @brief Creates a new element for a linked list.
 *
 * This function creates a new element for a linked list with the specified
 * content.
 *
 * @param content The content to be stored in the new element.
 * @return A pointer to the new element, or NULL if memory allocation fails.
 */