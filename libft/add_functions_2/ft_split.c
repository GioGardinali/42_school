/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:08 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/12 00:49:11 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_slices(char const *s, char c)
{
	size_t	index;
	size_t	slices;

	slices = 0;
	index = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		if (s[index] != '\0')
			slices++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (slices);
}

static void	ft_slices(char **splited, char const *s, char c, size_t len)
{
	size_t	index;
	size_t	position;

	position = 0;
	index = 0;
	while (len)
	{
		while (*s == c)
			s++;
		index = 0;
		while (s[index] != c && s[index] != '\0')
			index++;
		if (s[index] == c || *s != '\0')
		{
			splited[position] = ft_substr(s, 0, index);
			position++;
			s = &s[index];
		}
		len--;
	}
	splited[position] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	size_t	count_slices;

	if (!s)
		return (NULL);
	count_slices = ft_count_slices(s, c);
	splited = malloc((count_slices + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	ft_slices(splited, s, c, count_slices);
	return (splited);
}

/* #include <stdio.h>

int	main(void)
{
	const char	*string = "Hello,World,This,is,a,test";
	char		delimiter = ',';

	char	**splited = ft_split(string, delimiter);


		for (int i = 0; splited[i] != NULL; i++)
		{
			printf("Slice %d: %s\n", i, splited[i]);
			free(splited[i]); // Liberar memória alocada para cada slice
		}
		free(splited); // Liberar memória alocada para o array de ponteiros
	return (0);
}
 */
/* O principal objetivo da função ft_split que você enviou é 
dividir uma string em "slices" (pedaços) com base em um 
caractere delimitador e retornar um array de strings 
contendo esses "slices". */