/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{

}


static int	ft_nblen(int n)
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
	char	*answer;
	size_t	len;

	if (n == 0)
		return (ft_strdup ("0"));
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	len = ft_nblen (n);
	answer = malloc(len * sizeof (char) + 1);
	if (!answer)
		return (NULL);
	answer[len] = '\0';
	if (n < 0)
		n = n * -1;
	while (len--)
	{
		answer[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (answer[0] == '0')
		answer[0] = '-';
	return (answer);
}