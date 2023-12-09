#include <unistd.h>


int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
}