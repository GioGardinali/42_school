/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:19:30 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 21:12:22 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	clear_lists(t_stacks *stacks, int error)
{
	ft_lstclear(stacks->a, free);
	ft_lstclear(stacks->b, free);
	if (error)
		errors(error);
}

char	**clear_table(char **table)
{
	unsigned int	i;

	i = 0;
	while (table[i])
		free (table[i++]);
	free (table);
	return (NULL);
}
