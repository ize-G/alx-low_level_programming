#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the number to be computed
 * @y: the number to raise to power to
 *
 * Return: the computed results (Success).
 *	(-1) fail
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
