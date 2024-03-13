/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:12:06 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 20:30:38 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			index;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (p_s1[index] != p_s2[index])
			return ((int)(p_s1[index] - p_s2[index]));
		index++;
	}
	return (0);
}
