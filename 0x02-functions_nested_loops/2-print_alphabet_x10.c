#include "main.h"
/**
 * print_alphabet_x10- prints the alphabets 10 times and
 * in lowercase.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		char ch;

		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
