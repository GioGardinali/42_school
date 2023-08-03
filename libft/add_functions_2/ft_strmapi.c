/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:58 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:34:14 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*answer;

	if (!s)
		return (NULL);
	answer = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!answer)
		return (NULL);
	count = 0;
	while (s[count])
	{
		answer[count] = f(count, s[count]);
		count++;
	}
	answer[count] = '\0';
	return (answer);
}