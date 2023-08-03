/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/02 20:46:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = (char *)dest;
	p_src = (char *)src;
	if (p_dest > p_src)
	{
		while (n--)
			*p_dest++ = *p_src++;
		return (dest);
	}
	ft_memcpy(p_dest, p_src, n);
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	teste[] = "testando";
	char	origem[] = "TESTA";
	char	teste1[] = "testando";
	char	origem1[] = "TESTA";
	printf("\nDUPLICATA \n antes da mudança: %s", teste);
	ft_memmove(teste, origem, 5);
	printf("\nvamos ver a mudança: %s", teste);
	printf("\nORIGINAL \n antes da mudança: %s", teste1);
	memmove(teste1, origem1, 5);
	printf("\nvamos ver a mudança: %s", teste1);
}
