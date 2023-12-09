/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:41 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/13 16:04:02 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
