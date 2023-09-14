/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 05:57:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/13 23:30:58 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned long int adress)
{
	int	count;

	if (!adress)
	{
		return (ft_putstr_fd("(nil)", 1));
	}
	ft_putstr_fd("0x", 1);
	count = ft_putlowhex((unsigned long int)adress) + 2;
	return (count);
}

/* Esta função chamada ft_puthex_fd parece ser uma função que 
formata e imprime um valor hexadecimal em um descritor de 
arquivo (fd). */
