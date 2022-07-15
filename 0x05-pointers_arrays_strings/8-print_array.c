#include "main.h"
#include <stdio.h>

/**
* print_array - prints out all the elements in an array
* @a: array to be printed
* @n: number pf array elements to print
*
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
