#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: binary result
 */
void print_binary(unsigned long int n)
{
	int counter = 0;
	unsigned long int value;
	size_t num_bits = sizeof(n) * 8;

	for (size_t i = num_bits - 1; i < num_bits; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
	{
		_putchar('0');
	}
}
