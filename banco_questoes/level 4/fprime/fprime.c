#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int nb)
{
	unsigned	i;

	if (nb == 1)
		printf("1");
	else
	{
		i = 1;
		while (nb > 1)
		{
			if (nb % ++i == 0)
			{
				printf("%d", i);
				nb = nb / i;
				if (nb > 1)
					printf("*");
				--i;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && *argv[1])
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}