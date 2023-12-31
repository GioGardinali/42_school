/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:13:31 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 20:32:32 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	count;
	int	signal;
	int	res;

	count = 0;
	signal = 1;
	res = 0;
	while ((nptr[count] >= '\t' && nptr[count] <= '\r') || nptr[count] == ' ')
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			signal *= -1;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		res = (nptr[count] - '0') + (res * 10);
		count++;
	}
	return (res * signal);
}
