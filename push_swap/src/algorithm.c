/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:19:28 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/13 02:44:41 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_if_right(t_stacks *stacks)
{
	t_element	*element;

	if (stacks->b->size != 0)
		return (0);
	element = stacks->a->first;
	while (element->next)
	{
		if (element_int(element) > element_int(element->next))
			return (0);
		element = element->next;
	}
	return (1);
}

static void	alg_phase_one(t_stacks *stacks)
{
	t_element		*element;
	t_element_data	*min_moves;

	element = stacks->a->first;
	min_moves = NULL;
	while (element)
	{
		min_moves = nbr_moves(stacks, element, min_moves);
		if (min_moves->moves <= 1)
			break ;
		element = element->next;
	}
	move_a_to_b(stacks, min_moves);
}

static void	alg_phase_two(t_stacks *stacks)
{
	while (stacks->b->size > 0)
		stack_return_to_a(stacks, element_int(stacks->b->first));
	place_on_top_a(stacks, stacks->a_min);
}

void	algorithm(t_stacks *stacks)
{
	if (check_if_right(stacks))
		return ;
	stack_rule_by_size(stacks);
	if (check_if_right(stacks))
		return ;
	if (!stacks->b_sorted)
		alg_phase_one(stacks);
	else
	{
		a_properties(stacks);
		alg_phase_two(stacks);
	}
	algorithm(stacks);
}
