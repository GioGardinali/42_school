/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:18:46 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:12 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(unsigned int, char*))
{

}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		count;

	count = 0;
	while (s[count])
	{
		f(count, s + count);
		count++;
	}
}