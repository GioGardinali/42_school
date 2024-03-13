/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:29:54 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/13 04:55:16 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

unsigned int	element_top_distance(t_element *top, t_element *element)
{
	unsigned int	distance;

	distance = 0;
	while (top && top != element)
	{
		distance++;
		top = top->next;
	}
	return (distance);
}

void	a_properties(t_stacks *stacks)
{
	t_element	*element;

	element = stacks->a->first;
	stacks->a_max = element;
	stacks->a_min = element;
	element = element->next;
	while (element)
	{
		if (element_int(element) > element_int(stacks->a_max))
			stacks->a_max = element;
		else if (element_int(element) < element_int(stacks->a_min))
			stacks->a_min = element;
		element = element->next;
	}
}

void	b_properties(t_stacks *stacks)
{
	t_element	*element;

	element = stacks->b->first;
	stacks->b_max = element;
	stacks->b_min = element;
	element = element->next;
	while (element)
	{
		if (element_int(element) > element_int(stacks->b_max))
			stacks->b_max = element;
		else if (element_int(element) < element_int(stacks->b_min))
			stacks->b_min = element;
		element = element->next;
	}
}
