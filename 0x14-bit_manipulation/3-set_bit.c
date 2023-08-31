#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the number to be changed
 * @index: index of the bit to set
 *
 * Return: 1 if it works, -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
