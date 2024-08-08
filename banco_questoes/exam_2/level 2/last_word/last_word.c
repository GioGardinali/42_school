#include <unistd.h>

void last_word(char *str)
{
	int i_one;
	int i_two;
	i_one = 0;
	i_two = 0;

	while(str[i_one])
	{
		if (str[i_one] == ' ' && str[i_one + 1] >= 33 
			&& str[i_one + 1] <= 126)
		i_two = i_one + 1;
		i_one++;
	}
	while(str[i_two] >= 33 && str[i_two] <= 127)
	{
		write(1, &str[i_two], 1);
		i_two++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}