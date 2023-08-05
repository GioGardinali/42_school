/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:58:56 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 21:54:10 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char teste = 'A';

	printf("%c é numérico, seu retorno é: %d\n", teste, ft_isascii(teste));
	printf("%c é numérico, seu retorno é: %d\n", teste, isascii(teste));
} */
/* A função verifica se o int passado é de 0 até 127 na tabela ascii
Se for, retorna 1, se não, retorna 0. */