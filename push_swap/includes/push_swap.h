/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:15:50 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/14 23:59:51 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "../libraries/libft/libft.h"

typedef struct s_stacks
{
	t_list		*a;
	t_list		*b;
	t_element	*a_max;
	t_element	*a_min;
	t_element	*b_max;
	t_element	*b_min;
	int			b_sorted;
}	t_stacks;

enum	e_errors
{
	not_error,
	not_digit,
	integer_overflow,
	malloc_error,
	duplicated_value,
	empty_string
};

typedef struct s_element_data
{
	t_element		*element;
	unsigned int	ra;
	unsigned int	rra;
	unsigned int	rb;
	unsigned int	rrb;
	unsigned int	rr;
	unsigned int	rrr;
	unsigned int	ra_net;
	unsigned int	rb_net;
	unsigned int	rra_net;
	unsigned int	rrb_net;
	unsigned int	moves;
	int				move_scheme;
}	t_element_data;

#endif