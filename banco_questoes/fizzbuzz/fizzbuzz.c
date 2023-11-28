#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_number_print(int number)
{
	if (number > 9)
		ft_number_print(number / 10);
	putchar((number % 10) + 48);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else
			ft_number_print (i);
		i++;
		write (1, "\n", 1);
	}
}
