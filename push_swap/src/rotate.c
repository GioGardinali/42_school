/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:23:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/15 05:45:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_list *stack)
{
	t_element	*element;

	if (stack->size > 1)
	{
		element = ft_lstpop(stack, 0);
		ft_lstadd_back(stack, element);
	}
}

void	ra(t_stacks *stacks)
{
	rotate(stacks->a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stacks *stacks)
{
	rotate(stacks->b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stacks *stacks)
{
	rotate(stacks->a);
	rotate(stacks->b);
	ft_putstr_fd("rr\n", 1);
}
