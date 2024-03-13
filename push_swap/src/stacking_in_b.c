/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacking_in_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:19:28 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/13 03:15:28 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	min_moves(t_element_data *data)
{
	unsigned int	moves;
	unsigned int	moves_min;

	moves = data->rr + data->ra_net + data->rb_net;
	data->move_scheme = rr_ra_rb;
	moves_min = ft_value_min(moves, data->rrr + data->rra_net + data->rrb_net);
	if (moves_min < moves)
	{
		moves = moves_min;
		data->move_scheme = rrr_rra_rrb;
	}
	moves_min = ft_value_min(moves, data->ra + data->rrb);
	
}

t_element_data	*nbr_moves(t_stacks *stacks, t_element *element_a,
	t_element_data *prev_min_moves)
{
	t_element_data	*data;

	data = ft_calloc(1, sizeof(t_element_data));
	data->element = element_a;
	data->ra = element_top_distance(stacks->a->first, element_a);
	data->rra = stacks->a->size - data->ra;
	data->rb = rb_moves(stacks, element_int(element_a));
	data->rrb = stacks->b->size - data->rb;
	data->rr = ft_value_min(data->ra, data->rb);
	data->rrr = ft_value_min(data->rra, data->rrb);
	data->ra_net = data->ra - data->rr;
	data->rb_net = data->rb - data->rr;
	data->rra_net = data->rra - data->rrr;
	data->rrb_net = data->rrb - data->rrr;
	min_moves(data);
	if (!prev_min_moves)
		return (data);
	if (prev_min_moves->moves <= data->moves)
	{
		free(data);
		return (prev_min_moves);
	}
	free(prev_min_moves);
	return (data);
}
