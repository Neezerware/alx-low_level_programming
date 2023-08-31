#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: string containing the binary number to be converted
 *
 * Return: the converted number OR 0 if:
 * b contains chars asides 0 and 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = (result * 2) + (b[i] - '0');
	}

	return (result);
}
