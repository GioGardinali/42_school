int	is_power_of_2(unsigned int n)
{
	unsigned long int	index;

	index = 1;
	while (index <= n)
	{
		if (index == n)
			return (1);
		index *= 2;
	}
	return (0);
}
//vai multiplicar por 2 até chegar no parametro passado,
//se não chegar, é pq não é potência de 2.