#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *result;
	int i;
	int len;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	len = end - start + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (result)
	{
		while (i < len)
		{
			result[i] = start;
			start++;
			i++;
		}
	}
	return (result);
}
#include <stdio.h>
int *ft_rrange(int start, int end);

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");
	return (0);
}