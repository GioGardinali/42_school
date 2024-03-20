/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:19:28 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 21:52:24 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	stack_a_fill(char **table, t_stacks *stacks)
{
	t_element	*element;
	int			*number;
	int			i;

	i = 0;
	while (table[i])
	{
		number = malloc(sizeof(int));
		if (!number)
			clear_lists(stacks, malloc_error);
		*number = ft_atoi(table[i++]);
		element = ft_lstnew_element((void *)number);
		if (!element)
			clear_lists(stacks, malloc_error);
		ft_lstadd_back(stacks->a, element);
	}
	clear_table(table);
}

int	main(int argc, char **argv)
{
	char		**table;
	t_stacks	stacks;

	table = validation_args(argc, argv);
	ft_bzero(&stacks, sizeof(t_stacks));
	stacks.a = ft_calloc(1, sizeof(t_list));
	stacks.b = ft_calloc(1, sizeof(t_list));
	if (!stacks.a || !stacks.b)
		clear_lists(&stacks, malloc_error);
	stack_a_fill(table, &stacks);
	search_duplicates(&stacks);
	algorithm(&stacks);
	clear_lists(&stacks, not_error);
	return (0);
}
