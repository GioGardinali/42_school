/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:01:24 by gigardin          #+#    #+#             */
/*   Updated: 2023/05/31 19:01:01 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnum(char one, char two, char three)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (one != '7' || two != '8' || three != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_printnum (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
