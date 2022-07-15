#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 *
 * Return the string
 */
void rev_string(char *s)
{
	int i = 0;
	int lenght = 0;
	char helper;

	while (s[lenght] != 0)
	{
		lenght++;
	}

	for (i = lenght - 1; i >= lenght / 2; i--)
	{
		helper = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = helper;
	}
}
