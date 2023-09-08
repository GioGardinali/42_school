/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperpowerx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:08:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/08 14:09:11 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned long int adress)
{
	char	hex[17];
	char	*list;
	int		temp;
	int		index;

	list = "0123456789ABCDEF";
	temp = 0;
	index = 0;
	if (adress == 0)
		return (ft_putchar_fd('0', 1));
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