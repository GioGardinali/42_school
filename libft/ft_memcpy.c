/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:26 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/02 20:46:25 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

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

/* #include <stdio.h>

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TESTA";
	char	teste2[] = "testando";
	char	origem2[] = "TESTA"; 
	printf("\nDUPLICATA \n antes da mudança: %s", teste);
	ft_memcpy(teste, origem, 5);
	printf("\nvamos ver a mudança: %s", teste);
	printf("\nORIGINAL \n antes da mudança: %s", teste2);
	memcpy(teste2, origem2, 5);
	printf("\nvamos ver a mudança: %s", teste2);
} */
