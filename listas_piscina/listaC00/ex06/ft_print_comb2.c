/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:08:53 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/02 15:41:55 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printline(char copy_a, char copy_b)
{
	write(1, &copy_a, 1);
	write(1, &copy_b, 1);
}

void	ft_whi_the_number(int num, int max)
{	
	char	dozens;
	char	unit;

	if (num <= 9)
	{
		unit = num + 48;
		ft_printline('0', unit);
	}
	else if (num <= max)
	{
		unit = (num % 10) + 48;
		dozens = (num / 10) + 48;
		ft_printline(dozens, unit);
	}
}

void	ft_catint(int one, int two)
{
	ft_whi_the_number(one, 98);
	write(1, " ", 1);
	ft_whi_the_number(two, 99);
	if (one != 98 || two != 99)
		ft_printline(',', ' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_catint(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
