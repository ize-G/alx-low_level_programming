#include "main.h"
/**
 *print_line- prints a line in the terminal
 *@n: length of line to be printed
 *
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
