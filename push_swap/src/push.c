/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:23:43 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/15 05:35:16 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push(t_list *from, t_list *to)
{
	t_element	*element_from;

	if (from->size >= 1)
	{
		element_from = ft_lstpop(from, 0);
		ft_lstadd_front(to, element_from);
	}
}

void	pa(t_stacks *stacks)
{
	push(stacks->b, stacks->a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stacks *stacks)
{
	push(stacks->a, stacks->b);
	ft_putstr_fd("pb\n", 1);
}
