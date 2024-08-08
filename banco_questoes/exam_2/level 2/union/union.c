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
	int i_one = 0;
	int i_two = 0;
	int i_three = 0;

	if (argc == 3)
	{
		while (argv[1][i_one])
			i_one++;
		while (argv[2][i_two])
		{
			argv[1][i_one] = argv[2][i_two];
			i_one++;
			i_two++;
		}
		i_one--;
		while (i_three <= i_one)
		{
			if(check (argv[1], argv[1][i_three], i_three) == 1)
				write(1, &argv[1][i_three], 1);
			i_three++;
		}
	}
	write(1, "\n", 1);
}
