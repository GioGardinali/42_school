/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:28:52 by gigardin          #+#    #+#             */
/*   Updated: 2023/09/10 23:46:22 by gigardin         ###   ########.fr       */
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
	while (!ft_strchr(buffer, '\n') && bytes_read)
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

static char	*ft_getline_for_print(char *buffer)
{
	char	*line;
	size_t	index;

	index = 0;
	if (!buffer[index])
		return (NULL);
	while (buffer[index] != '\n' && buffer[index] != '\0')
		index++;
	line = ft_calloc(index + 2, sizeof(char));
	index = 0;
	while (*buffer != '\n' && *buffer)
		line[index++] = *buffer++;
	if (*buffer == '\n')
		line[index] = '\n';
	return (line);
}

static char	*ft_buffer_rest(char *buffer)
{
	size_t	buffer_index;
	size_t	line_index;
	char	*next_line;

	buffer_index = 0;
	line_index = 0;
	while (buffer[buffer_index] != '\n' && buffer[buffer_index] != '\0')
		buffer_index++;
	if (buffer[buffer_index] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	next_line = ft_calloc(ft_strlen(buffer) - buffer_index + 1, sizeof(char));
	buffer_index++;
	while (buffer[buffer_index] != '\0')
		next_line[line_index++] = buffer[buffer_index++];
	free(buffer);
	return (next_line);
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
	line = ft_getline_for_print(buffer);
	buffer = ft_buffer_rest(buffer);
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

/* ft_readline que lê uma linha de texto de um descritor de 
arquivo (file descriptor) fd e a armazena em um buffer buffer. 
Ele lê os dados em blocos de tamanho BUFFER_SIZE e concatena 
esses blocos até encontrar uma nova linha ('\n') ou até atingir
 o final do arquivo

 fd: O descritor de arquivo a partir do qual os dados serão 
 lidos.
buffer: Um ponteiro para um buffer de caracteres que armazenará
 a linha lida. 
 temp_buffer é inicializado com o valor de buffer. Isso é feito
  para permitir que buffer seja realocado e estender a 
  capacidade de armazenamento de dados
  bytes_read é inicializado com 1, para que o loop comece 
  a executar.

  read(fd, read_buffer, BUFFER_SIZE): Isso é uma chamada à 
  função read, que é uma função de entrada/saída (I/O) do 
  sistema operacional em C, usada para ler dados de um arquivo 
  ou descritor de arquivo. Os parâmetros são os seguintes:

fd: O descritor de arquivo a partir do qual os dados serão 
lidos.
read_buffer: O buffer onde os dados lidos serão armazenados.
BUFFER_SIZE: O tamanho máximo de dados que podem ser lidos em 
uma única chamada. É uma constante que determina o tamanho do 
bloco de leitura.
 */

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

/* ft_buffer_rest, que é projetada para ser usada em conjunto com a 
manipulação de um buffer de texto. A função extrai o restante 
do conteúdo de um buffer de caracteres até encontrar o primeiro 
caractere de nova linha ('\n') ou até o final do buffer ('\0'). 

	while (buffer[buffer_index] != '\n' && buffer[buffer_index] != '\0')
		buffer_index++;
	if (!buffer[buffer_index])
	{
		free(buffer);
		return (NULL);
	}
Após sair do loop, o código verifica se o caractere apontado 
por buffer_index é um caractere nulo ('\0'). Se for, significa 
que não há mais linhas no buffer, e a função libera a memória 
alocada para o buffer (assumindo que ele não será mais usado) 
e retorna NULL para indicar que não há mais conteúdo para ser 
extraído.

A função ft_calloc é chamada para alocar dinamicamente memória 
para a variável line. Ela aloca memória para armazenar o restante 
do conteúdo do buffer. O tamanho alocado é calculado como a 
diferença entre o comprimento total do buffer e buffer_index, 
mais 1 para o caractere nulo de terminação da string ('\0').
Aí eu pulo 1 casa, pois eu estou no '\n', para seguir na 
criação da string. */

/* chamada get_next_line que é usada para ler e retornar a 
próxima linha de um arquivo representado por um descritor 
de arquivo (fd). A função segue uma abordagem de leitura 
incremental, onde ela lê o arquivo em blocos e mantém um 
estado persistente entre as chamadas para rastrear o 
progresso da leitura. 

buffer: Uma variável estática (mantém seu valor entre chamadas
 da função) que é usada para armazenar o estado da leitura 
 entre chamadas. Ela armazena os dados não processados 
 do arquivo. */