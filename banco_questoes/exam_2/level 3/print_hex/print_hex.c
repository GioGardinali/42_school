#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		signal *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 0 && *str <= 9)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * signal);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}