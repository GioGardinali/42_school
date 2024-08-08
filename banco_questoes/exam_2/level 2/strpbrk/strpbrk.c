#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	
	if (!s1 || !s2)
	{
		return (0);
	}
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (0);
}

int main() {

    const char *s1 = "Hello, World!";
    const char *s2 = "Helo";

    char *result = ft_strpbrk(s1, s2);
        printf("Caractere correspondente encontrado: %s\n", result);
    return 0;
}