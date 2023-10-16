/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:42:57 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 18:39:34 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test_isalpha1[] = "abcxsdefsw";
// 	char test_isalpha2[] = "fDrdsFGESturu";

// 	printf("EX07- retorno deve ser maiusculo-> %s\n",
// ft_strupcase(test_isalpha1));
// 	printf("EX07 - retorno deve ser maiusculo- -> %s\n",
// ft_strupcase(test_isalpha2));
// }