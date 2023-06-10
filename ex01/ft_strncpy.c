/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:34:15 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 19:27:30 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "oiwerwde";
// 	char	src[] = "hello";
// 	ft_strncpy(dest, src, 10);
// 	printf("dest = %s", dest);
// 	ft_strncpy(dest, src, 3);
// 	printf("dest = %s", dest);
// }