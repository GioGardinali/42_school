/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:04:07 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/27 22:20:00 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *) s, 0, (size_t) n);
}

/* #include <stdio.h>

int	main(void)
{
	char	teste[] = "testando";
	printf("\nantes da mudança: %s", teste);
	ft_bzero(teste, 3);
	printf("\nvamos ver a mudança: %s", teste);
} */
