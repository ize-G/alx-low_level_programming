#include "main.h"

/**
 * _puts - prints a string followed by a newline
 *
 * @str: string to be printed
 *
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
