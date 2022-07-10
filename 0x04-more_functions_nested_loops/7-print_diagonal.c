#include "main.h"

/**
 * print_diagonal- draws a diagonal line on the terminal
 * @n: specifies the lenght of the line
 *
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int b;

			for (b = 0; b < i; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
