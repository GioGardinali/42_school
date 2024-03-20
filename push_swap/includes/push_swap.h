/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:15:50 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/19 21:30:44 by gigardin         ###   ########.fr       */
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

enum	e_moves
{
	rr_ra_rb,
	rrr_rra_rrb,
	ra_rrb,
	rra_rb
};

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

char			**validation_args(int argc, char **argv);
void			search_duplicates(t_stacks *stacks);

void			algorithm(t_stacks *stacks);

void			stack_by_size(t_stacks *stacks);
void			a_properties(t_stacks *stacks);
void			b_properties(t_stacks *stacks);

void			place_on_top_a(t_stacks *stacks,
					t_element *element_to_be_moved);
unsigned int	element_top_distance(t_element *top, t_element *element);
void			stack_return_to_a(t_stacks *stacks, int nbr_to_push);
t_element_data	*nbr_moves(t_stacks *stacks, t_element *element_a,
					t_element_data *prev_min_moves);

int				element_int(t_element *element);
unsigned int	ft_value_max(unsigned int a, unsigned int b);
unsigned int	ft_value_min(unsigned int a, unsigned int b);

void			move_a_to_b(t_stacks *stacks, t_element_data *element_data);
void			pa(t_stacks *stacks);
void			pb(t_stacks *stacks);
void			sa(t_stacks *stacks);
void			sb(t_stacks *stacks);
void			ss(t_stacks *stacks);
void			ra(t_stacks *stacks);
void			rb(t_stacks *stacks);
void			rr(t_stacks *stacks);
void			rra(t_stacks *stacks);
void			rrb(t_stacks *stacks);
void			rrr(t_stacks *stacks);

void			errors(int error_code);
char			**clear_table(char **table);
void			clear_lists(t_stacks *stacks, int error);

#endif