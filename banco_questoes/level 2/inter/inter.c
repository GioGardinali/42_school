#include <unistd.h>

int	interce(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[i] && (i < len || len -1))
		if (str[i++] == c)
			return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!interce(argv[1], argv[1][i], i) && interce(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
