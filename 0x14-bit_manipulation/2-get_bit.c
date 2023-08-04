#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to be supplied
 * @index: index of the bit
 *
 * Return: value of the bit at the index or -1 if error orrus
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
