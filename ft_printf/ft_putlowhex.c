/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:24:48 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/14 02:18:30 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowhex(unsigned long int adress)
{
	char				hex[17];
	char				*list;
	unsigned int		temp;
	int					index;

	list = "0123456789abcdef";
	temp = 0;
	index = 0;
	if (adress == 0)
		return (ft_putchar_fd('0', 1));
	while (adress >= 1)
	{
		temp = adress % 16;
		adress = adress / 16;
		hex[index] = list[temp];
		index++;
	}
	temp = index;
	while (index-- > 0)
	{
		ft_putchar_fd(hex[index], 1);
	}
	return (temp);
}

int ft_putlowhex(unsigned long int adress)
{
    char                hex[17];  // Declaração de um array de caracteres chamado 'hex' com espaço para 17 caracteres.
    char                *list;    // Declaração de um ponteiro para um array de caracteres chamado 'list'.
    unsigned int        temp;     // Declaração de uma variável sem sinal chamada 'temp'.
    int                 index;    // Declaração de uma variável inteira chamada 'index'.

    list = "0123456789abcdef";     // Inicialização do ponteiro 'list' com uma string contendo os dígitos hexadecimais.
    temp = 0;                     // Inicialização da variável 'temp' com 0.
    index = 0;                    // Inicialização da variável 'index' com 0.

    if (adress == 0)
        return (ft_putchar_fd('0', 1));  // Verifica se 'adress' é zero; se sim, imprime '0' e retorna 1.

    while (adress >= 1)  // Loop para converter 'adress' em representação hexadecimal.
    {
        temp = adress % 16;  // Calcula o valor hexadecimal atual.
        adress = adress / 16;  // Divide 'adress' por 16 para processar o próximo dígito hexadecimal.
        hex[index] = list[temp];  // Armazena o dígito hexadecimal atual em 'hex'.
        index++;  // Incrementa 'index' para avançar para o próximo dígito.
    }

    temp = index;  // Armazena o valor final de 'index' em 'temp'.

    while (index-- > 0)  // Loop para imprimir os dígitos hexadecimais em ordem inversa.
    {
        ft_putchar_fd(hex[index], 1);  // Imprime o dígito hexadecimal.
    }

    return (temp);  // Retorna o número de dígitos hexadecimais impressos.
}
