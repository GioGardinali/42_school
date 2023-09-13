/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:59:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/13 18:57:53 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long int n)
{
	size_t	count;

	if (n < 0)
		count = 1;
	else
		count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
