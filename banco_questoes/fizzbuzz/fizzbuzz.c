#include <unistd.h>

void ft_number_print ( int number)
{
	char str[10] = "0123456789";

	if (number > 9)
			ft_number_print(number / 10);
	write(1, &str[number % 10], 1);
}


int main ()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15)
			write (1, "fizzbuzz", 8);
		else if (i % 5)
			write (1, "buzz", 4);
		else if (i % 3)
			write (1, "fizz", 4);
		else
			ft_number_print (i);
		i++;
		write (1, "\n", 2);
	}
}