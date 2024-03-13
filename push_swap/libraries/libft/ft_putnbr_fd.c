/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:21:28 by gigardin          #+#    #+#             */
/*   Updated: 2023/10/28 16:06:36 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
