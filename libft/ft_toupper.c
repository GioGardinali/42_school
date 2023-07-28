/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:06:17 by gigardin          #+#    #+#             */
/*   Updated: 2023/07/27 16:51:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/* #include <stdio.h>

int		main(void)
{
	int c = 'a';
	int teste;

	printf("converte a letra maiuscula em minuscula: ");
	printf("%d", c);
	teste = ft_toupper(c);
	printf("\n após a aplicação da função: ");
	printf("%d", teste);
	return (0);
} */