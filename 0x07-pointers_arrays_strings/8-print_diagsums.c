#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 *	matrix of integers.
 *@a: the matrix of integers to be computed
 *@size: the size of a.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int left_diag = 0, right_diag = 0;

	for (i = 0; i < size; i++)
	{
		left_diag += a[(size * i) + i];
		right_diag += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", left_diag, right_diag);
}
