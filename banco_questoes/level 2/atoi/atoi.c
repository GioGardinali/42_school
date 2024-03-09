#include <stdio.h>

int	ft_atoi(const char *str)
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

// int main(void)
// {
// 	printf("%d",ft_atoi("     456"));
// }