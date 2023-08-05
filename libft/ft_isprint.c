/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:02:25 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 21:56:24 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char teste = 'A';

	printf("%c é numérico, seu retorno é: %d\n", teste, ft_isalpha(teste));
	printf("%c é numérico, seu retorno é: %d\n", teste, isalpha(teste));
} */
/* A função verifica se o int passado é todos que são printaveis
Se for, retorna 1, se não, retorna 0. */