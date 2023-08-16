/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:22:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 14:46:25 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

#include <stdio.h>
int	main(void)
{
	t_list	str;

	str.content = "teste";
	ft_lstnew(&str);
	printf("%s \n", str.content);
	printf("%s \n", str.next);
	printf("%s \n", ft_lstnew(&str));
}
/* Lista deve consistir em 3 nós (node)
Tem que ter um ponteiro que aponta para o 1º nó da lista

Um nó tem dados e link, como exemplo:
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

Não é necessário usar type casting em nó na hora de mallocar
Na função a gente cria um nó com o o t_list que é a saída do
formato lista.
assim a gente cria a variável, maloca dentro dela o 
tipo t_list 
w depois atribui valor no nó, no struct que a t_list
permite, que é o content e o next, e passo o que a função 
pediu, que o content fosse o que a função pega de parametro
e o next, que ficasse com NULL (o next é o link do endereço) */
