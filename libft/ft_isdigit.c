/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:57:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 21:55:22 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char teste = 'A';

	printf("%c é numérico, seu retorno é: %d\n", teste, ft_isdigit(teste));
	printf("%c é numérico, seu retorno é: %d\n", teste, isdigit(teste));
} */
/* A função verifica se o int passado é numeros (apenas numeros)
Se for, retorna 1, se não, retorna 0. */