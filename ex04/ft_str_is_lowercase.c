/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:36:14 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 16:00:25 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_isalpha1[] = "abcxsdeDsw";
// 	char test_isalpha2[] = "abcxsdedsw";

// 	printf("EX04 - retorno 0 -> %d - %s\n", 
// ft_str_is_lowercase(test_isalpha1), test_isalpha1);

// 	printf("EX04 - retorno 1 -> %d - %s\n", 
// ft_str_is_lowercase(test_isalpha2), test_isalpha2);
// }
