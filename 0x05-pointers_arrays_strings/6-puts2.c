#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *c = str;
	int n;

	while (*c != '\0')
	{
		c++;
		len++;
	}
	a = len - 1;
	for (n = 0 ; n <= a ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
