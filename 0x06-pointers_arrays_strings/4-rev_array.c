#include "main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: the array to be reversed
 * @n: number of elements in the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;


	while (i < (n / 2))
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
		i++;
	}
}
