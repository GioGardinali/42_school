/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/10 19:48:15 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
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
	while (s1[index] != '\0')
	{
		str[index] = s1[index];
		index++;
	}
	while (*s2 != '\0')
	{
		str[index] = *s2++;
		index++;
	}
	str[index] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (unsigned char)c)
			return ((char *)s + index);
		index++;
	}
	if (s[index] == (unsigned char)c)
		return ((char *)s + index);
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p_nmemb;
	size_t	overflow;

	overflow = nmemb * size;
	if (nmemb != 0 && (overflow / nmemb) != size)
		return (NULL);
	p_nmemb = malloc(overflow);
	if (!p_nmemb)
		return (NULL);
	while (overflow--)
		*(unsigned char *)(p_nmemb + overflow) = 0;
	return (p_nmemb);
}
