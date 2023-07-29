/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:26 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/29 15:12:55 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;

	if (dest == src || !n)
		return (dest);
	p_dest = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (p_dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TE";
	printf("\nantes da mudança: %s", teste);
	ft_memcpy(teste, origem, 3);
	printf("\nvamos ver a mudança: %s", teste);
} */
