/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:50:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 19:48:40 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_list *stack)
{
	t_element	*element;

	if (stack->size > 1)
	{
		element = ft_lstpop(stack, 1);
		ft_lstadd_front(stack, element);
	}
}

void	ss(t_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
	ft_putstr_fd("ss\n", 1);
}

void	sa(t_stacks *stacks)
{
	swap(stacks->a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stacks *stacks)
{
	swap(stacks->b);
	ft_putstr_fd("sb\n", 1);
}
