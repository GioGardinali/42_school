/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:16:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/06 20:16:36 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{

}
char	*ft_strtrim(const char *s1, const char *set)
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

int main(void)
{
	char	*teste1;
	char	*teste2;
}