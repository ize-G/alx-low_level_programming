#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be computed
 *
 * Return: The computed factorial (success)
 *	-1 (Error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
