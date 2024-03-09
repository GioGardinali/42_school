/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:15:50 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/06 16:46:20 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <../libft/libft.h>

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

#endif