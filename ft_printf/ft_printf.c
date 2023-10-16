/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:14:52 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/14 02:25:39 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_flag(const char *str_char, va_list args)
{
	if (*str_char == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (*str_char == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (*str_char == 'p')
		return (ft_puthex_fd(va_arg(args, unsigned long int)));
	else if (*str_char == 'd' || *str_char == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (*str_char == 'u')
		return (ft_nbrun((va_arg(args, unsigned int))));
	else if (*str_char == 'x')
		return (ft_putlowhex((va_arg(args, unsigned int))));
	else if (*str_char == 'X')
		return (ft_putuphex((va_arg(args, unsigned int))));
	else if (*str_char == '%')
		return (ft_putchar_fd('%', 1));
	else
		return (ft_putchar_fd(*str_char, 1));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (-1);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if ((*str == '%') && (*str + 1 != '%'))
		{
			str++;
			count += check_flag(str, args);
			str++;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			str++;
			count += 1;
		}
	}	
	va_end(args);
	return (count);
}

/* va_list args;: Isso declara uma lista de argumentos variáveis 
chamada args. A va_list é uma estrutura usada para acessar argumentos 
variáveis em funções variádicas, ou seja, funções que podem receber 
um número variável de argumentos.

if (!str) return (-1);: Isso verifica se a string de formato 
str é válida (ou seja, não é NULL). Se for NULL, a função retorna 
-1 indicando um erro.

count = 0;: Isso inicializa a variável count para contar o 
número total de caracteres impressos.

va_start(args, str);: Isso inicializa a lista de argumentos 
variáveis args. Ele diz ao compilador para começar a ler 
argumentos variáveis após o último argumento conhecido, que é 
str neste caso.

O loop while (*str) percorre cada caractere na string de 
formato str.

if ((*str == '%') && (*str + 1 != '%')): Isso verifica se 
o caractere atual é um '%' e se o próximo caractere não é outro 
'%'. Se for o caso, isso indica que encontramos um especificador 
de formato.

str++;: Move para o próximo caractere após o '%'.

count += check_flag(str, args);: Chama a função check_flag para 
processar a formatação e retorna o número de caracteres impressos 
pela formatação. Esse valor é adicionado à contagem total.

str++;: Move para o próximo caractere após o especificador de 
formato.

Caso contrário, se o caractere atual não for um '%', ele é 
considerado um caractere normal. ft_putchar_fd(*str, 1); 
imprime esse caractere na tela.

str++;: Move para o próximo caractere na string.

count += 1;: Incrementa a contagem de caracteres.

va_end(args);: Isso finaliza a lista de argumentos variáveis 
após o loop.

return (count);: A função retorna o número total de caracteres 
impressos.

Este código permite que você use a função ft_printf para imprimir 
texto formatado, semelhante à função printf padrão, mas com 
formatação personalizada. Ela usa a va_list para lidar com a 
lista de argumentos variáveis passados para a função e processa 
os especificadores de formato na string de formato str. */

/* Se você não usar va_end, é possível que o compilador ou a 
implementação da biblioteca padrão C não realize a limpeza 
adequada desses recursos, o que pode levar a vazamentos de 
memória ou outros problemas. O comportamento exato pode variar 
de acordo com a implementação e o sistema operacional, mas em 
geral, é considerado uma boa prática usar va_end para garantir 
um comportamento confiável e consistente.

Portanto, para garantir a correção e a portabilidade do código, 
é importante usar va_end sempre que você usa va_start para 
inicializar uma lista de argumentos variáveis em funções 
variádicas. Isso ajuda a evitar problemas de vazamento de 
recursos e a manter um código robusto e seguro. */