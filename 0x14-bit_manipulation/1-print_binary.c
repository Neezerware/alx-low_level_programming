#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: binary result
 */
void print_binary(unsigned long int n)
{
	int i;
	int counter = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
