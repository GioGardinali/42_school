/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:05:53 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/08 18:59:06 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(src);
	dest_len = 0;
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	index = 0;
	if (dest_len < size)
	{
		while ((index + dest_len) < (size - 1) && src[index])
		{
			dst[index + dest_len] = src[index];
			index++;
		}
		dst[index + dest_len] = '\0';
	}
	return (dest_len + src_len);
}
