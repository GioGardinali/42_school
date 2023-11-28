/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:34:51 by gigardin          #+#    #+#             */
/*   Updated: 2023/11/25 21:00:53 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while ((argv[1][i] != ' ' && argv[1][i] != '\t') &&
			argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 2);
}

/* eu peço para checar se é o segundo argumento da matriz
para iniciar a impressão, assim, eu faço outra checagem
para imprimir sem tab (9) e sem espaço(32), quero apenas
a string sem isso na frente
Depois uso um segundo while para impressão 
e por fim dou \n  */
