#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to determine its last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int unit;

	unit = n % 10;

	if (unit < 0)
	{
		unit = unit * -1;
	}
	_putchar(unit + '0');
	return (unit);
}
