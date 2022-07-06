#include "main.h"
#include <stdio.h>
/**
 * print_to_98- Prints out all natural numbers from n to 98,
 * followed by a newline
 * @n: number under 98 from where the printing starts
 *
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98\n");
}
