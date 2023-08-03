/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:19:16 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/03 17:59:19 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	char ch = 'A'; // Caractere a ser escrito no descritor de arquivo
	ft_putchar_fd(ch, 1); // Escreve o caractere 'A' no descritor de arquivo 
	1 (saída padrão)
	return (0);
} */
/* em sistemas baseados em UNIX/Linux, os descritores de arquivo são 
representados por números inteiros. O descritor 0 é o padrão de 
entrada (stdin), o descritor 1 é a saída padrão (stdout) e o 
descritor 2 é a saída de erro padrão (stderr). Além disso, 
quando você abre um arquivo usando a função open em C, o sistema 
operacional retorna um novo descritor de arquivo, que você pode usar 
para ler e escrever no arquivo. */