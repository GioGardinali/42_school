#include <unistd.h>

int	check(char *str, char c, int index)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		j = 0;
		while (j < i)
		{
			if(check (argv[1], argv[1][j], j) == 1)
				write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
