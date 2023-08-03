/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:09:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 16:03:54 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len && *(s + len) != (char)c)
		len--;
	if (*(s + len) == (char) c)
		return ((char *)(s + len));
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	const char	*teste = "testanado";
	char		*ptr;

	ptr = ft_strrchr(teste, 'a');
	printf("Será procurado dentro de teste o o que passei de parametro: \n");
	printf("%s", ptr);
}  */