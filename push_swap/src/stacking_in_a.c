/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking_in_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:21:28 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/13 02:44:30 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	place_on_top_a(t_stacks *stacks, t_element *element_to_be_moved)
{
	unsigned int	top_distance;
	unsigned int	botton_distance;

	top_distance = element_top_distance(stacks->a->first, element_to_be_moved);
	botton_distance = stacks->a->size - top_distance;
	if (top_distance <= botton_distance)
		while (top_distance--)
			ra(stacks);
	else
		while (botton_distance--)
			rra(stacks);
}

static void	find_and_place_on(t_stacks *stacks, int nbr_to_push)
{
	t_element	*element;
	t_element	*element_next;

	element = stacks->a->first;
	element_next = element->next;
	while (element)
	{
		element_next = element->next;
		if (!element_next)
			element_next = stacks->a->first;
		if (element_int(element) < nbr_to_push && \
			element_int(element_next) > nbr_to_push)
			break ;
		element = element->next;
	}
	place_on_top_a(stacks, element_next);
}

void	stack_return_to_a(t_stacks *stacks, int nbr_to_push)
{
	if (nbr_to_push > element_int(stacks->a_max))
	{
		place_on_top_a(stacks, stacks->a_min);
		stacks->a_max = stacks->b->first;
	}
	else if (nbr_to_push < element_int(stacks->a_min))
	{
		place_on_top_a(stacks, stacks->a_min);
		stacks->a_min = stacks->b->first;
	}
	else
		find_and_place_on(stacks, nbr_to_push);
	pa(stacks);
}
