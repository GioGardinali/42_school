/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:11:04 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/02 15:44:11 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char *teste2;
	char	*teste = "testando";
	printf("\nantes da mudança: %s", teste);
	teste2= ft_memchr(teste, 'A', 3);
	printf("\nvamos ver a mudança: %s", teste2);
} */
