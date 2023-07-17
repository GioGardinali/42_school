/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:34:09 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 19:28:12 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "oi, tudo bem?";
// 	char test_strcpy[20];

// 	ft_strcpy(test_strcpy, src);
// 	printf("EX00 - %s\n", test_strcpy);
// }	