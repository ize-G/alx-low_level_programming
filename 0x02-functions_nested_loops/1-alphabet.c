#include "main.h"
/**
 * print_alphabet- prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
