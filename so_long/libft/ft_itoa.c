/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/10 20:20:42 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
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

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	if (n == 0)
		return (ft_strdup ("0"));
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	len = ft_nbrlen (n);
	result = malloc(len * sizeof (char) + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		n = n * -1;
	while (len--)
	{
		result[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (result[0] == '0')
		result[0] = '-';
	return (result);
}
