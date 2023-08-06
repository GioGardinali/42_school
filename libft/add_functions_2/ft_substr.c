/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:15:39 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/06 20:48:33 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_substr;
	size_t	len_s;
	size_t	index;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > (len_s - start))
		len = len_s - start;
	new_substr = (char *)malloc(len * sizeof(char) + 1);
	if (!new_substr)
		return (NULL);
	index = 0;
	while (s[index] && index < len)
	{
		new_substr[index] = s[start + index];
		index++;
	}
	new_substr[index] = '\0';
	return (new_substr);
}

int	main(void)
{
	char	*teste = "testando";
	char	*resposta = ft_substr(teste, 0, 4);

	printf("saída duplicata: ");
	printf("\n %s", resposta);
}

A função ft_substr. Ela recebe três argumentos:

s: Um ponteiro constante para a string da qual será extraída a 
substring.
start: Um número inteiro não assinado que representa a posição 
inicial da substring na string s.
len: Um número do tipo size_t que representa o comprimento da 
substring a ser extraída