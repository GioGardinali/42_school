/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:42:51 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/13 23:19:26 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", 1));
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
		sign = 1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, 1);
	ft_putchar_fd((char)(n % 10 + 48), fd);
	return (ft_nbrlen(n) + sign);
}
