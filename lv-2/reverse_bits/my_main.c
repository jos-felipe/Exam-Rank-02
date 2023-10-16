#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{
	unsigned char octet = 0b00100110;

	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse_bits(octet));
	return (0);
}
