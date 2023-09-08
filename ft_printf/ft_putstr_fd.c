/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:47:21 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/08 11:47:38 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		write(fd, &s[index], 1);
		index++;
	}
}
