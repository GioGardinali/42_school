/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:26 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 20:30:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer;

	if (dest == src || !n)
		return (dest);
	buffer = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (buffer);
}
