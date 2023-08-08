/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:16:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/08 20:43:21 by gigardin         ###   ########.fr       */
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

	printf("saída nova de teste1: \n");
	printf("%s", ft_strtrim(teste1, teste2));
} */
