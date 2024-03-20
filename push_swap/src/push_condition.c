/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_condition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:23:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 21:03:14 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	move_a_to_b_cases_combined(t_stacks *stacks,
	t_element_data *element_data)
{
	if (element_data->move_scheme == rr_ra_rb)
	{
		while (element_data->rr--)
			rr(stacks);
		while (element_data->ra_net--)
			ra(stacks);
		while (element_data->rb_net--)
			rb(stacks);
	}
	else if (element_data->move_scheme == rrr_rra_rrb)
	{
		while (element_data->rrr--)
			rrr(stacks);
		while (element_data->rra--)
			rra(stacks);
		while (element_data->rrb--)
			rrb(stacks);
	}
}

static void	move_a_to_b_not_cases_combined(t_stacks *stacks,
	t_element_data *element_data)
{
	if (element_data->move_scheme == ra_rrb)
	{
		while (element_data->ra_net--)
			ra(stacks);
		while (element_data->rrb--)
			rrb(stacks);
	}
	else if (element_data->move_scheme == rra_rb)
	{
		while (element_data->rra--)
			rra(stacks);
		while (element_data->rb--)
			rb(stacks);
	}
}

void	move_a_to_b(t_stacks *stacks, t_element_data *element_data)
{
	move_a_to_b_cases_combined(stacks, element_data);
	move_a_to_b_not_cases_combined(stacks, element_data);
	pb(stacks);
	if (element_int(element_data->element) > element_int(stacks->b_max))
		stacks->b_max = stacks->b->first;
	else if (element_int(element_data->element) < element_int(stacks->b_min))
		stacks->b_min = stacks->b->first;
	free (element_data);
}
