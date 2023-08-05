/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:58:19 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/04 20:24:31 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char teste = 'A';

	printf("%c é alfanumérico, seu retorno é: %d\n", teste, ft_isalnum(teste));
	printf("%c é alfanumérico, seu retorno é: %d\n", teste, isalnum(teste));
} */

/* A função verifica se o int passado é um alfanumerico (letras e numeros)
Se for, retorna 1, se não, retorna 0. */
