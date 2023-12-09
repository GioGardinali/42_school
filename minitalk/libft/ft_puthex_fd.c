/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 05:57:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/10/28 15:55:28 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned long int adress)
{
	int	count;

	if (!adress)
	{
		return (ft_putstr_fd("(nil)", 1));
	}
	ft_putstr_fd("0x", 1);
	count = ft_putlowhex((unsigned long int)adress) + 2;
	return (count);
}
