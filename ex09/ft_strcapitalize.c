/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:26:35 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 19:09:43 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	index_check;

	index = 0;
	index_check = 0;
	while (str[index] != '\0')
	{
		if (index_check == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] = str[index] - 32;
			index_check++;
		}
		else if (index_check > 0 && (str[index] >= 'A' && str[index] <= 'Z'))
			str[index] = str[index] + 32;
		else if ((str[index] < '0') || (str[index] > '9' && str[index] < 'A')
			|| (str[index] > 'Z' && str[index] < 'a') || (str[index] > 'z'))
			index_check = 0;
		else
			index_check++;
		index++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

// 	ft_strcapitalize(src);
// 	printf("EX09 - Tem que retornar as iniciais maiusculas - %s\n\n", src);
// }