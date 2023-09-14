/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:59:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/13 23:24:04 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
