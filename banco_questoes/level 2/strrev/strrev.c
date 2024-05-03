char *ft_strrev(char *str)
{
	char temp;
	int length = 0;
	int i = 0;

	length = 0;
	i = 0;
	while (str[length])
		length++;
	while (i < (length - 1))
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length--;}
	return (str);
}