/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:08 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	
}

static int	ft_count_slices(char const *s, char c)
{
	size_t	index;
	size_t	slices;

	slices = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] != '\0')
			slices++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (slices);
}

static void	ft_slices(char **splited, char const *s, char c)
{
	size_t	index;
	size_t	position;
	size_t	len;

	position = 0;
	index = 0;
	len = ft_count_slices(s, c);
	while (len)
	{
		while (*s == c)
			s++;
		index = 0;
		while (s[index] != c && s[index])
			index++;
		if (s[index] == c || *s)
		{
			splited[position] = ft_substr(s, 0, index);
			position++;
			s = &s[index];
		}
		len--;
	}
	splited[position] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**splited;

	if (!s)
		return (NULL);
	splited = malloc((ft_count_slices(s, c) + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	ft_slices(splited, s, c);
	return (splited);
}