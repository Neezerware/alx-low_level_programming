#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if length is odd, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, slen;

	slen = 0;

	for (i = 0; str[i] != '\0'; i++)
		slen++;

	n = (slen / 2);

	if ((slen % 2) == 1)
		n = ((slen + 1) / 2);

	for (i = n; str[i] != '\0'; a++)
		_putchar(str[i]);
	_putchar('\n');
}
