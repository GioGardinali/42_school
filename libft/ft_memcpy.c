/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:26 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/28 19:11:35 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	if (dest == src || !n)
		return (dest);
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (p_dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TESTANDO";
	printf("\nantes da mudança: %s", teste);
	ft_memcpy(teste, origem, 3);
	printf("\nvamos ver a mudança: %s", teste);
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*anchor;

	if (dest == src || !n)
		return (dest);
	anchor = (char *)dest;
	while (n--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (anchor);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buf;

	if (dest == src || !n)
		return (dest);
	buf = (char *)dest;
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (buf);
} */