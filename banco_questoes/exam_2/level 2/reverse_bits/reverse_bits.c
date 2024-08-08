unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	result = 0;

	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (result);
}

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
		   (((octet >> 1) & 1) << 6) | \
		   (((octet >> 2) & 1) << 5) | \
		   (((octet >> 3) & 1) << 4) | \
		   (((octet >> 4) & 1) << 3) | \
		   (((octet >> 5) & 1) << 2) | \
		   (((octet >> 6) & 1) << 1) | \
		   (((octet >> 7) & 1) << 0); 
}

#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet);

int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
}