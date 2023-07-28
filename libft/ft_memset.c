/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:03:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/28 17:47:21 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		ptr[n] = c;
	return (s);
}

/* #include <stdio.h>

int	main(void)
{
	char	teste[] = "testando";
	printf("\nantes da mudança: %s", teste);
	ft_memset(teste, 'A', 3);
	printf("\nvamos ver a mudança: %s", teste);
} */
