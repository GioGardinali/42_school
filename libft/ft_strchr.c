/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:08:10 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/02 17:22:26 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == (char)c)
			return ((char *)(s - 1));
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	const char	*teste = "testando";
	char		*ptr;

	ptr = ft_strchr(teste, 'a');
	printf("Será procurado dentro de large o texto que está na small: \n");
	printf("%s", ptr);
} */
