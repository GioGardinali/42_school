/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:23:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 20:36:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rev_rotate(t_list *stack)
{
	t_element	*element;

	if (stack->size > 1)
	{
		element = ft_lstpop(stack, -1);
		ft_lstadd_front(stack, element);
	}
}

void	rrr(t_stacks *stacks)
{
	rev_rotate(stacks->a);
	rev_rotate(stacks->b);
	ft_putstr_fd("rrr\n", 1);
}

void	rra(t_stacks *stacks)
{
	rev_rotate(stacks->a);
	ft_putstr_fd("rrr\n", 1);
}

void	rrb(t_stacks *stacks)
{
	rev_rotate(stacks->b);
	ft_putstr_fd("rrr\n", 1);
}
