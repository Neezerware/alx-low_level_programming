#include <stdio.h>

/**
 * main - This program prints alphabets in lowercase
 * in reverse, followed by a new line
 * Return: 0 (Successful)
 */
int main(void)
{
	char chc;

	for (chc = 'z'; chc >= 'a'; chc--)
	{
		putchar(chc);
	}
	putchar('\n');
	return (0);
}

