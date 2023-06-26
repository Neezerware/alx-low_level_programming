#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int sstrs = 0;
	int n;

	while (*s != '\0')
	{
		sstrs++;
		s++;
	}
	s--;
	for (n = sstrs; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
