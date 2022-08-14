#include "main.h"

/**
 * is_prime_number - computes whether the passed integer is a prime number
 * @n: the number to be computed
 *
 * Return: 1 if the integer is a prime number
 *	0 if the integer is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_wrapper(n, 0));
}

/**
 * prime_wrapper - divides a number by array
 *	to determine whether or not the number is prime
 * @n: the number to be computed
 * @i: the indicator for the divisor array
 *
 * Return: 1 if the number is prime
 *	0 if the number is not prime
 */
int prime_wrapper(int n, int i)
{
	int a[5] = {2, 3, 5, 7, 11};

	if ((n % *(a + i)) == 0)
		return (0);
	if (i < 4 && (n % *(a + i) != 0))
		return (prime_wrapper(n, i + 1));
	return (1);
}
