/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:27:22 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/09 02:27:15 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_element	*element;
	t_element	*new_element;

	if (!lst || !lst->first || !f)
		return (NULL);
	new_lst = ft_calloc(1, sizeof(t_list));
	element = lst->first;
	while (element)
	{
		new_element = ft_lstnew_element(f(element->content));
		if (!new_element)
		{
			ft_lstclear(new_lst, del);
			return (NULL);
		}
		element = element->next;
		ft_lstadd_back(new_lst, new_element);
	}
	return (new_lst);
}
/**
 * @brief Applies a function to each element of a linked list and creates a
 * new list.
 *
 * This function applies the function `f` to each element of the linked
 * list `lst` and creates a new list with the results. The `del` function is
 * used to delete the content of an element if an allocation failure occurs.
 *
 * @param lst The pointer to the head of the list.
 * @param f   The function to be applied to the content of each element.
 * @param del The function to delete the content of an element in case of
 * allocation failure.
 * @return A pointer to the new list, or NULL if an allocation failure occurs.
 */