char    *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char temporary;

	while (str[length])
		length++;
	while (++i < length / 2)
//Este loop while inicia com i incrementado em 1 
//e continua até que i seja menor que metade 
//do comprimento da string. Isso garante que 
//a inversão seja feita apenas até a metade 
//da string, pois a segunda metade já estará invertida.
	{
		temporary = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temporary;
	}
	return (str);
}