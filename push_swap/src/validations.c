/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 04:52:38 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 22:17:32 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_limit_int(char *nptr)
{
	long long	i;

	if (ft_strlen(nptr) > 11)
		return (0);
	i = ft_atoll(nptr);
	if (i < INT_MIN || i > INT_MAX)
		return (0);
	return (1);
}

static char	**create_args_table(int argc, char **argv)
{
	char	**table;
	int		i;

	table = NULL;
	i = 0;
	if (argc == 2 && ft_strlen(argv[1]))
		table = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		table = ft_calloc(argc, sizeof(char *));
		if (!table)
			errors(malloc_error);
		i++;
		while (i < argc)
		{
			table[i - 1] = ft_strdup(argv[i]);
			if (!table[i - 1])
				clear_table(table);
			i++;
		}
	}
	if (!table)
		errors(malloc_error);
	return (table);
}

char	**validation_args(int argc, char **argv)
{
	int		i;
	char	**table;

	i = 0;
	if (argc < 2)
		exit(EXIT_SUCCESS);
	else
		table = create_args_table(argc, argv);
	while (table[i])
	{
		if (check_limit_int(table[i]) == 0)
		{
			clear_table(table);
			errors(integer_overflow);
		}
		if (!ft_isstringint_atoi(table[i++]))
		{
			clear_table(table);
			errors(not_digit);
		}
	}
	return (table);
}

void	search_duplicates(t_stacks *stacks)
{
	t_element	*element_one;
	t_element	*element_two;
	t_list		*stack_a;

	stack_a = stacks->a;
	element_one = stack_a->first;
	while (element_one)
	{
		element_two = element_one->next;
		while (element_two)
		{
			if (*(int *)element_one->content == *(int *)element_two->content)
				clear_lists(stacks, duplicated_value);
			element_two = element_two->next;
		}
		element_one = element_one->next;
	}
}
