#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Assigns a random number and prints out whether the stored number is +ve or-ve */

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%i is negative\n", n);
		}
		return (0);
}
