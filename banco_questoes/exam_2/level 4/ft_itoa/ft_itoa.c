#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int		len;
	long	n_tmp;
	char	*str;

	len = 0;
	n_tmp = nbr;
	if (nbr == -2147483648)
		return ("-2147483648");
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] ='\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		len = len + 1;
		nbr = nbr * -1;
		str[0] = '-';
	}
	while (n_tmp)
	{
		n_tmp = n_tmp / 10;
		len++;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}