/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:35:34 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 16:00:30 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {

// 	char test_isnumeric1[] = "01234";
// 	char test_isnumeric2[] = "0123456abC";

// 	printf("EX03 - tem que retornar 1 -> %d\n", 
// ft_str_is_numeric(test_isnumeric1));
// 	printf("EX03 - tem que retornar 0 -> %d\n\n", 
// ft_str_is_numeric(test_isnumeric2));
// }	