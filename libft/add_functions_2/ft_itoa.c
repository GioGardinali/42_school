/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/10 19:45:22 by gigardin         ###   ########.fr       */
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

/* função nbrlen vai pegar o int que eu passei e
realizar um count do int, pra fazer de numero positivo o 
count vai iniciar em 0, para contar corretamente.
para contar int negativo, eu já inicio com 1, pois ele vai ser 
importante na hora de transformar em char, pois esse 1+ vai 
ser o espaço destinado para colocar o '-' na frente do numero impresso

para fazer a contagem de casas, eu fico dividinfo o int n por 10
até contar tudo, tipo: se meu int for 20, ao passar no while
ele ficará 2 [0 1 2] --> [2 0 \0](em char) */
