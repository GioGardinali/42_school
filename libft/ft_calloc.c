/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 22:54:14 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p_nmemb;
	size_t	overflow;

	overflow = nmemb * size;
	if (nmemb != 0 && (overflow / nmemb) != size)
		return (NULL);
	p_nmemb = malloc(nmemb * size);
	if (!p_nmemb)
		return (NULL);
	ft_bzero(p_nmemb, overflow);
	return (p_nmemb);
}

/* int	main(void)
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);

    // Chamando a função ft_calloc para alocar memória para o array
	int *array = (int *)ft_calloc(num_elements, element_size);

	if (array == NULL)
	{
		printf("Falha na alocação de memória.\n");
		return 1; // Termina o programa com código de erro
	}
	// Imprimindo os elementos do array alocado
	printf("Array alocado e inicializado com zeros:\n");
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	// Liberando a memória alocada
	free(array);
	return 0; // Programa executado com sucesso
} */