/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:37:05 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 16:00:19 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_isalpha1[] = "abcxsdeDsw";
// 	char test_isalpha2[] = "ADESDFRFFR";

// 	printf("EX05 - retorno 0 -> %d - %s\n",
// 		 ft_str_is_uppercase(test_isalpha1), test_isalpha1);

// 	printf("EX05 - retorno 1 -> %d - %s\n",
// ft_str_is_uppercase(test_isalpha2), test_isalpha2);
// }