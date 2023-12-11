/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:24:48 by gigardin          #+#    #+#             */
/*   Updated: 2023/12/10 23:24:55 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putlowhex(unsigned long int adress)
{
	char				hex[17];
	char				*list;
	unsigned int		temp;
	int					index;

	list = "0123456789abcdef";
	temp = 0;
	index = 0;
	if (adress == 0)
		return (ft_putchar_int_fd('0', 1));
	while (adress >= 1)
	{
		temp = adress % 16;
		adress = adress / 16;
		hex[index] = list[temp];
		index++;
	}
	temp = index;
	while (index-- > 0)
	{
		ft_putchar_fd(hex[index], 1);
	}
	return (temp);
}
