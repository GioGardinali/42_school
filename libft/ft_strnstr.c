/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:13:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/02 17:19:50 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	index;

	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	index = 0;
	while (big[index] && len >= len_little)
	{
		if (big[index] == *little
			&& ft_strncmp(big + index, little, len_little) == 0)
			return ((char *)big + index);
		index++;
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;

	ptr = ft_strnstr(largestring, smallstring, 5);
	printf("Será procurado dentro de large o texto que está na small: \n");
	printf("%s", ptr);
} */
