/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:19:30 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/15 00:00:08 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	element_int(t_element *element)
{
	return (*(int *) element->content);
}

unsigned int	ft_value_min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned int	ft_value_max(unsigned int a, unsigned int b)
{
	if (a > b)
		return (a);
	return (b);
}

char	**clear_table(char **table)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free (tab[i++]);
	free (tab);
	return (NULL);
}
