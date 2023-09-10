/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:52 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/10 19:42:57 by gigardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_readline(int fd, char *buffer)
{
	char	*temp_buffer;
	char	*read_buffer;
	ssize_t	bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, sizeof(char));
	temp_buffer = buffer;
	read_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(read_buffer);
			free(temp_buffer);
			return (NULL);
		}
		read_buffer[bytes_read] = '\0';
		temp_buffer = buffer;
		buffer = ft_strjoin(temp_buffer, read_buffer);
		free(temp_buffer);
	}
	free(read_buffer);
	return (buffer);
}

static char	*ft_getline(char *buffer)
{
	char	*line;
	size_t	index;

	index = 0;
	if (!buffer[index])
		return (NULL);
	while (buffer[index] != '\n' && buffer[index])
		index++;
	line = ft_calloc(index + 2, sizeof(char));
	index = 0;
	while (*buffer != '\n' && *buffer)
		line[index++] = *buffer++;
	if (*buffer == '\n')
		line[index] = '\n';
	return (line);
}

static char	*ft_buffertrim(char *buffer)
{
	size_t	buffer_index;
	size_t	line_index;
	char	*line;

	buffer_index = 0;
	line_index = 0;
	while (buffer[buffer_index] != '\n' && buffer[buffer_index])
		buffer_index++;
	if (!buffer[buffer_index])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc(ft_strlen(buffer) - buffer_index + 1, sizeof(char));
	buffer_index++;
	while (buffer[buffer_index])
		line[line_index++] = buffer[buffer_index++];
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_readline(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_getline(buffer);
	buffer = ft_buffertrim(buffer);
	return (line);
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

/* 1024 é o limite de arquivos que o sistema operacional usando
open, consegue abrir simutaneamente até este limite de arquivo
que denominamos como File Descriptor (fd) */

/* Função getline

	index = 0;
	if (!buffer[index])
		return (NULL);
Aqui, o código verifica se o primeiro caractere do buffer é nulo 
(ou seja, o buffer está vazio). Se o buffer estiver vazio, a 
função retorna NULL, indicando que nenhuma linha foi encontrada.
line = ft_calloc(index + 2, sizeof(char));
A função ft_calloc é chamada para alocar dinamicamente memória para 
a variável line. Ela aloca index + 2 bytes de memória e inicializa 
todos os bytes com zero. Isso cria um buffer para armazenar a linha 
extraída, mais um espaço para o caractere de nova linha ('\n') e um 
espaço para o caractere nulo de terminação da string ('\0'). */