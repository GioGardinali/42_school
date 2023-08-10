/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/10 20:19:31 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	size_t	count;

	if (n < 0)
		count = 1;
	else
		count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	if (n == 0)
		return (ft_strdup ("0"));
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	len = ft_nbrlen (n);
	result = malloc(len * sizeof (char) + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		n = n * -1;
	while (len--)
	{
		result[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (result[0] == '0')
		result[0] = '-';
	return (result);
}

int	main(void)
{
	char	*teste;
	int		number;
	int		number2;

	number = 1234;
	number2 = -1234;
	teste = ft_itoa(number);
	printf("Função ITOA: resultado de um int virando char\n");
	printf("%s", teste);
	teste = ft_itoa(number2);
	printf("\nFunção ITOA: resultado de um int virando char\n");
	printf("%s", teste);
}

/* função itoa converte variavel int em char *, ou 
seja em uma string.
para realizar a impressão de 0 e -2147483648 (menor int)
Usamos o strdup que já aloca espaço na memória e imprime o
que desejamos.
Após isso, realizamos a contagem do int, lembrando que 
não adianta usar strlen pra este caso. */

/* função nbrlen vai pegar o int que eu passei e
realizar um count do int, pra fazer de numero positivo o 
count vai iniciar em 0, para contar corretamente.
para contar int negativo, eu já inicio com 1, pois ele vai ser 
importante na hora de transformar em char, pois esse 1+ vai 
ser o espaço destinado para colocar o '-' na frente do numero impresso

para fazer a contagem de casas, eu fico dividinfo o int n por 10
até contar tudo, tipo: se meu int for 20, ao passar no while
ele ficará 2 [0 1 2] --> [2 0 \0](em char) */

/* Após a contagem, a gente aloca memoŕia com o malloc dentro
da variável result, checa se alocou corretamente, se não 
retorna NULL. 
Seguido, eu já seto no ultimo espaço da result, o \0
Até porque ela é uma string e eu vou completar ela 
decrementando.
Assim, eu sigo e checo se o valor de int é negativo para 
tornar ele positivo e entrar no loop de acrescentar dentro
da string, para acrescentar dentro dela, eu pego o n % 10 + 48
para pegar o restante de módulo e transformar ele char com 48
(ASCII) e depois, eu divido o n por 10, para reduzir o int
 se era 1234, agora com a divisão é 123 e eu passo novamente
 no while até zerar.
Após tudo isso, eu checo se a primeira posição da string está
Zero, pois lembra que usamos o ft_nbrlen e está lá falando que se
for  n menor que 0, count = 1? assim a gente tem o espaço para 
adicionar o '-' no inicio da string caso o int seja negativo 
e termianr a função. */
