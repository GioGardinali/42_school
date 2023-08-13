/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:08 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/13 13:49:49 by gigardin         ###   ########.fr       */
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
contendo esses "slices".

A função split usamos um array (**), sabendo disso
chamamos na função a string principal + o caractere que estamos procurando
( - , . < > " " ' ' e por aí vai de caracteres que realizam
a separação de strings )

Assim, eu faço uma função chamada count slices para contar 
quantas vezes este caractere C aparece dentro da String, já
que ele será o limitador de cada nova string que irei criar.
Onde eu coloco o index para seguir para o pŕoximo caractere
cso ele seja o C (que já foi contabilizado), depois
mando um while rodar até ser diferente de C ou \0, para encontrar
o proximo C e um if que fica responsável de que após ele encontrar
um caractere C, ele vai na condicional e acrescenta + 1 slice 
se a string ainda não chegou no \0.

Por ultimo, passamos a função ft_slices(splited, s, c, count_slices)
que vai pegar como parametro o array criado + a string original
+ o caractere que estamos procurando + a contagem dos pedaços
que a string será fragmentada.

Nesta função trabalhamos o position como cada casinha dentro
do array e o index, para contabilizar a quantidade de caracteres
entra cada delimitador "char c".

Eu seto o index em 0, coloco um while para rodar até encontrar
um caractere C e encontrar o \0, 
No momento que ele encontra, partimos para a condicional if
para checar se é == c ou diferente de \0, pois iremos aplicar
o substr (para criar nova string com a quantidade de index
que rodamos)
Após aplicar o substr, vamos decrementar o 'len' (quant de pedaços)
e vamos setar a string principal s direto para o index que 
estávamos (se meu index era 5, a partir da pŕoxima volta do
while, vai ser o ínicio da minha string)
É um pouco confuso, mas assim, vamos supor que meu s terminou 
assim: s[index] --> s[5], assim eu aponto a nova posição para 
o s iniciar o pŕoximo pedaço, ou seja s = &s[index](novo valor);
assim, agora meu s está iniciando pelo s[5] e não s[0] e eu 
sigo o loop até terminar todos os lens.

Ahh lembrando, toda vez que ele entra no loop, ele seta o index 
para 0, mas é porque ele é o nosso count de tamanho da próxima 
string que será criada devido já ser outro pedaço da string 
principal. */
