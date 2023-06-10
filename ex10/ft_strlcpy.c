/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:45:25 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 19:29:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char src[] = "Oiuu-tudo bem?";
// 	char dest[] = "";
// 	unsigned int n;

// 	n = 5;

// 	printf("antes da mudança\n\tsrc: %s\n\tarquivo dest:
// 	%s\n\ttamanho do buffer de dest: %d\n", src, dest, n);

//     n = ft_strlcpy(dest, src, n);

// 	printf("após a mudança\n\tarquivo dest:
//  %s\n\ttamanho do buffer leitura do src total: %d", dest, n);
// 	return (0);
// }