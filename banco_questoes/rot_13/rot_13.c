#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

# Escreva um programa que recebe uma string e a exibe, substituindo 
cada uma de suas letras pela letra que está 13 espaços à 
frente na ordem alfabética.

'z' torna-se 'm' e 'Z' torna-se 'M'. A caixa (maiúscula ou minúscula) 
permanece inalterada.

A saída será seguida por uma nova linha.

Se o número de argumentos não for 1, o programa exibirá uma nova linha.

exemplos:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$