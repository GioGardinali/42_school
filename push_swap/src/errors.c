/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:50:28 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/14 23:59:20 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	errors(int error_code)
{
	if (error_code == not_digit)
		ft_putstr_fd("Error\n", 2);
	else if (error_code == integer_overflow)
		ft_putstr_fd("Error\n", 2);
	else if (error_code == malloc_error)
		ft_putstr_fd("Error\n", 2);
	else if (error_code == duplicated_value)
		ft_putstr_fd("Error\n", 2);
	else
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
