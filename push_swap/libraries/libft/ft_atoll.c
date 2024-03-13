/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:45:03 by gigardin          #+#    #+#             */
/*   Updated: 2024/03/12 21:48:18 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *nptr)
{
	long long	count;
	int			signal;
	long long	res;

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
