#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int counter = 0;
	unsigned long int value;
	unsigned long int exor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = exor >> i;
		if (value & 1)
			counter++;
	}

	return (counter);
}
