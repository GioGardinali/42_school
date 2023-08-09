/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:16:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 18:16:16 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr (set, *s1))
		s1++;
	len = ft_strlen((char *)s1);
	while (len && ft_strchr (set, s1[len - 1]))
		len--;
	return (ft_substr (s1, 0, len));
}

/* #include <stdio.h>

int	main(void)
{
	char	*teste1 = "testando";
	char	*teste2 = "ndo";

	printf("saída nova de teste1 aplicando a strtrim: \n");
	printf("%s", ft_strtrim(teste1, teste2));
	printf("\nsaída normal da teste1: \n%s", teste1);
} */

/* Essa função ft_strtrim em C recebe duas strings 
como entrada: s1 e set. Ela remove os caracteres 
especificados em set do início e do final da string s1 e 
retorna uma nova string resultante após a remoção. 
A função retorna uma alocação de memória para a nova 
string, então lembre-se de liberar essa memória quando 
não for mais necessária para evitar vazamentos de memória.

Essa função aloca memória e retorna uma cópia da string passada.

Depois de remover os caracteres indesejados do início, a 
função calcula o novo comprimento da string s1 após a 
remoção.

Em seguida, outro loop é usado para remover os 
caracteres do final da string s1 seguindo uma lógica 
semelhante ao primeiro loop.

Finalmente, a função utiliza ft_substr para criar uma nova 
string a partir da string s1, começando da posição 0 e com 
o comprimento ajustado após a remoção dos caracteres 
indesejados do início e do final.

Ela é frequentemente usada para limpar entradas de dados,
como remoção de espaços em branco ou caracteres especiais,
antes de realizar operações adicionais. */
