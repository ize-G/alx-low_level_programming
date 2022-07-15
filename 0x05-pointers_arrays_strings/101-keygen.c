#include  <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - programs that generates random valid
 * passwords (for 101-crackme.)
 *
 * Return: Always 0.
 */
int main(void)
{
	int p[100];
	int i;
	int n;
	int sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		sum += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
