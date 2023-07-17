/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:40:42 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 15:41:04 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] <= ' ' || str[index] >= '~')
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_isalpha1[] = "abcxsdeDsw\n";
// 	char test_isalpha2[] = "ADfrdtjrtjrturu4363&";
// 	char test_isalpha3[] = "AD frdtjrtjrturu4363&";

// 	printf("EX06 - retorno 0 -> %d - %s\n", 
// ft_str_is_printable(test_isalpha1), test_isalpha1);

// 	printf("EX06 - retorno 1 -> %d - %s\n", 
// ft_str_is_printable(test_isalpha2), test_isalpha2);
// 	printf("EX06 - retorno 0 -> %d - %s\n", 
// ft_str_is_printable(test_isalpha3), test_isalpha3);
// }