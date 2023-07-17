/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:43:44 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 18:39:23 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test_isalpha1[] = "DGERGDGFD";
// 	char test_isalpha2[] = "LKJMBVGRRGFGHEE";

// 	printf("EX08- retorno deve ser minusculo-> %s\n", 
// 		ft_strlowcase(test_isalpha1));
// 	printf("EX08 - retorno deve ser minusculo- -> %s\n", 
// 		ft_strlowcase(test_isalpha2));
// }