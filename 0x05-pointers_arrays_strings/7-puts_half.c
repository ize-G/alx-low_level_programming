#include "main.h"

/**
 * puts_half - prints half of a string,
 *	followed by a newline.
 * @str: string to be computed
 *
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = 0;
	int n; /* n is the midpoint */

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		for (n = (length_of_the_string / 2); (str[n] != '\0'); n++)
		{
			_putchar(str[n]);
		}
	}

	else if (length_of_the_string % 2 != 0)
	{
		for (n = (length_of_the_string + 1) / 2; (str[n] != '\0'); n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
