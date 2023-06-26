#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char revr = s[0];
	int tracker = 0;
	int i;

	while (s[tracker] != '\0')
	tracker++;
	for (i = 0; i < tracker; i++)
	{
		tracker--;
		revr = s[i];
		s[i] = s[tracker];
		s[tracker] = revr;
	}
}
