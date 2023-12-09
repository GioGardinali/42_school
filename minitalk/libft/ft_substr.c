/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:15:39 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/08 17:34:18 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
