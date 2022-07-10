#include "main.h"

/**
 * print_square- prints a square of size 'size', followed by a newline
 * @size: size of the square to be printed
 *
 */
void print_square(int size)
{
int width;
int length;

if (size > 0)
{
for (length = 0; length < size; length++)
{
for (width = 0; width < size; width++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
