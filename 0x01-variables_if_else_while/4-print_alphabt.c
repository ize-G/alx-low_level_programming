#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char ch = 'a';

	if (ch != 'q' && ch!= 'e')
		ch++;
	else if (ch <= 'z')
		putchar(ch);
	else
		putchar('\n');
	return (0);
}
