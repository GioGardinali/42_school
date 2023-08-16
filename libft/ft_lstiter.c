/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:27:05 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/16 19:48:56 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* Temos a lista 'lst' e aplica a função
'f' no conteúdo de cada nó.
para isso, passamos dentro de f o content para ser modificado
e seguido eu atribuo o novo endereço do lst para o pŕoximo nó.
até cehgar no NULL. */