#include "main.h"
/**
 *print_line- prints a line in the terminal
 *@n: length of line to be printed
 *
 */
void print_line(int n)
{
if (n > 0)
{
int i;

for (i = 0; i <= n; i++)
{
_putchar('_');
}

_putchar('\n');
}
else
{
_putchar('\n');
}
}
