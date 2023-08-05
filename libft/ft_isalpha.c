/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:57:32 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 21:56:39 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
/* A função verifica se o int passado é um alfabetico (apenas letras)
Se for, retorna 1, se não, retorna 0. */
