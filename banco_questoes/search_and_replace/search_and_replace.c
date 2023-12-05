#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// # Escreva um programa chamado search_and_replace que recebe 
// 3 argumentos. O primeiro argumento é uma string na qual 
// substituir uma letra (2º argumento) por
// outra (3º argumento).

// Se o número de argumentos não for 3, apenas exiba uma 
// quebra de linha.

// Se o segundo argumento não estiver contido no 
// primeiro (a string), então o programa simplesmente 
// reescreve a string seguida por uma quebra de linha.

// Examples:
// $>./search_and_replace "Papache est un sabre" "a" "o"
// Popoche est un sobre