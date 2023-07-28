/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:07:28 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/27 16:47:42 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/* #include <stdio.h>

int		main(void)
{
	int c = 'A';
	int teste;

	printf("converte a letra maiuscula em minuscula: ");
	printf("%d", c);
	teste = ft_tolower(c);
	printf("\n após a aplicação da função: ");
	printf("%d", teste);
	return (0);
} */
