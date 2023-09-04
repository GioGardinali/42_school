#include "get_next_line.h"
#include "stdio.h"
#include <fcntl.h>

int	main(void)
{
	int fd;
/* 	int fd2; */
	int i;
	char *aux;
/* 	char *aux2; */
	i = 0;
	fd = open("estudos.txt", O_RDONLY);
/* 	fd2 = open("teste2.txt", O_RDONLY); */
	while (i < 3)
	{
		aux = get_next_line(fd);
		printf("%s", aux);
		// printf("%d",i);
		if (aux != NULL)
		{
			free(aux);
		}
		i++;
	}
/* 	i = 0; */
/* 		while (i < 4)
	{
		aux2 = get_next_line(fd2);
		printf("%s", aux2);
		// printf("%d",i);
		if (aux2 != NULL)
		{
			free(aux2);
		}
		i++;
	} */
	close(fd);
/* 	close(fd2); */
}