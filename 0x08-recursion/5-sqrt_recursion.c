#include "main.h"

/**
 * _sqr_wrapper - computes the natural square root of a number
 * @guess: the number being guessed as the square root.
 * @n: the number to be computed
 * Return: the natural sqaure root
 *      -1 if fail
 */
int _sqr_wrapper(int n, int guess)
{
	int g_squared;

	g_squared = guess * guess;

	if (g_squared == n)
		return (guess);
	else if (g_squared < n)
		return (_sqr_wrapper(n, guess + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - wrapper function which returns the
 *  natural square root of a number
 * @n: the number to be computed
 *
 * Return: the natural sqaure root
 *	-1 if fail
 */
int _sqrt_recursion(int n)
{
	return (_sqr_wrapper(n, 1));
}
