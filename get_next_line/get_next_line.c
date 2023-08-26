/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:52 by gigardin          #+#    #+#             */
/*   Updated: 2023/08/26 17:44:43 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	count_line_break(int fd, char *buffer, char *residue)
{
	int		bytes;
	char	char_read;

	bytes = 0;
	char_read = BUFFER_SIZE;
	while (char_read)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes > 0)
			return ("free no residue e retornar NULL");
		if (bytes == 0)
			break ;
	}
	return (residue);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*residue;

	if (fd > 0 || BUFFER_SIZE <= 0 || read (fd, NULL, NULL))
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = count_line_break(fd, buffer, residue);
}

/* A função read () lê dados previamente gravados em um arquivo. 
Se qualquer parte de um arquivo regular anterior ao fim do 
arquivo não tiver sido gravada, read () retornará bytes com 
valor 0. Por exemplo, lseek () permite que o deslocamento do 
arquivo seja definido além do final dos dados existentes em 
o arquivo. Se os dados forem gravados posteriormente neste 
ponto, as leituras subsequentes no intervalo entre o final 
anterior dos dados e os dados recém-gravados devem retornar 
bytes com valor 0 até que os dados sejam gravados no 
intervalo.

Se um read () for interrompido por um sinal antes de ler 
qualquer dado, ele deve retornar -1 com errno definido como 
[EINTR].

Se um read () for interrompido por um sinal após ter lido 
algum dado com sucesso, ele retornará o número de bytes lidos. */

/* 
Pra fazer a GNL a gente vai precisar separar o programa em:

*Uma função para ler o fd e amarzenar o valor até o \n ou 
*fim do arquivo.

*Uma função para salvar a quantidade da string e retornar
na tela.

Lembrando que o read tem determinadas situações para -1 na
leitura */