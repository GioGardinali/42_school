#include <unistd.h>

int main (int argc , char **argv)
{
	int i = 0;
	int j;

	if (argc == 2)
	{
		
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t')) // search for is_space and move the position.
			{
				i++;
			}
			j = i; // this is the postion of starting of the word.
			while (argv[1][i])
			{
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t')) // find the next word.
				{
					i++;
				}
				while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t')) // find the next word.
				{
					i++;
				}
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i -1] == ' ' || argv[1][i - 1] == '\t')) // print the word till it reaches last.
				{
					while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
					{
						write (1, &argv[1][i], 1);
						i++;
					}
					write (1, " ", 1);
					i++;
				}
			}
			while (argv[1][j] && (argv[1][j] != ' ' && argv[1][j] != '\t')) // print the first word now.
			{
				write (1, &argv[1][j], 1);
				j++;
			}
	}
	write (1, "\n", 1);
}