#include <stdio.h>
int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i = 0;

	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return result;
}

// int main() {
//     // Exemplo de uso da função max
//     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     unsigned int length = sizeof(array) / sizeof(array[0]);

//     int maxValue = max(array, length);
//     printf("O maior valor no array é: %d\n", maxValue);

//     return 0;
// }