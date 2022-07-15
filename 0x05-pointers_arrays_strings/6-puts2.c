#include "main.h"

/**
 * puts2 - prints every character of a string starting with the first
 * followed by a newline
 *
 * @str: string to be computed
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
