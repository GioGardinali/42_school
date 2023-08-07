/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:15:39 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/06 21:33:27 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *new_substr;
	size_t len_s;
	size_t index;

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
	while (s[index] != '\0' && index < len)
	{
		new_substr[index] = s[start + index];
		index++;
	}
	new_substr[index] = '\0';
	return (new_substr);
}

/* int	main(void)
{
	char	*teste = "testando";
	char	*resposta = ft_substr(teste, 0, 4);

	printf("saída duplicata: ");
	printf("\n %s", resposta);
} */

/* A função ft_substr. Ela recebe três argumentos:

s: Um ponteiro constante para a string da qual será extraída a
substring.
start: Um número inteiro não assinado que representa a posição
inicial da substring na string s.
len: Um número do tipo size_t que representa o comprimento da
substring a ser extraída


if (start >= len_s) return (ft_strdup("")) : A função verifica se
a posição inicial start é maior ou igual ao tamanho da string
s (len_s). Se for o caso, isso significa que a posição inicial está
além do final da string e não há caracteres para extrair. Nesse caso,
a função retorna uma cópia vazia da string usando a função ft_strdup,
que aloca dinamicamente memória para uma string vazia.

if (len > (len_s - start)) len = len_s - start;: A função verifica
se o comprimento len é maior que o número de caracteres disponíveis
a partir da posição start até o final da string s. Se for o caso, a
função ajusta o comprimento len para que a substring não ultrapasse
o final da string. */