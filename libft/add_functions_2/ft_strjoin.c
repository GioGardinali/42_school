/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:16:01 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:43 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		str[index] = s1[index];
		index++;
	}
	while (*s2)
	{
		str[index] = *s2++;
		index++;
	}
	str[index] = '\0';
	return (str);
}