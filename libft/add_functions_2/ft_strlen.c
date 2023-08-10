/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:02:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/05 18:03:48 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* # include <stdio.h>
#include <string.h>

int		main(void)
{
	int teste = ft_strlen("testando");
	int teste1 = strlen("testando");
	printf("DUPLICATA - imprime a contagem da string que queremos: ");
	printf("%d\n", teste);
	printf("ORIGINAL - imprime a contagem da string que queremos: ");
	printf("%d\n", teste1);
	return (0);
} */

/* A função ft_strlen é uma função que irá contabilizar o tamanho de 
uma string por quantidade de caracteres.
Ela irá rodar até \0, pois toda string roda até este item.
Assim, o retorno da função é essa contagem de caracteres. */
