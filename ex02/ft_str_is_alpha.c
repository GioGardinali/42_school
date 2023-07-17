/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:34:49 by gigardin          #+#    #+#             */
/*   Updated: 2023/06/10 16:00:37 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A') || (str[index] > 'Z' && str[index] < 'a')
			|| (str[index] > 'z'))
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_isalpha1[] = "Abc";
// 	char test_isalpha2[] = "Abc123";

// 	printf("EX02 - retorno tem que ser 1 -> %d\n", 
// 		ft_str_is_alpha(test_isalpha1));
// 	printf("EX02 - retorno tem que ser 0 -> %d\n\n", 
// 		ft_str_is_alpha(test_isalpha2));
// }
