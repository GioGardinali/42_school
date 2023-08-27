/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:47 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/27 14:31:25 by gigardin         ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		index;
	int		len;

	if (*s == '\0')
	{
		copy = malloc (sizeof (char) * 1);
		copy[0] = '\0';
		return (copy);
	}
	len = ft_strlen (s);
	copy = malloc (sizeof (char) * len + 1);
	if (!copy)
		return (NULL);
	index = 0;
	while (s[index])
	{
		copy[index] = s[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_substr;
	size_t	len_s;
	size_t	index;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > (len_s - start))
		len = len_s - start;
	new_substr = (char *)malloc(len * sizeof(char) + 1);
	if (!new_substr)
		return (NULL);
	index = 0;
	while (s[index] != '\0' && index < len)
	{
		new_substr[index] = s[start + index];
		index++;
	}
	new_substr[index] = '\0';
	return (new_substr);
}
