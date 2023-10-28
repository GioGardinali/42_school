/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:27 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/09 22:52:07 by gigardin         ###   ########.fr       */
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
