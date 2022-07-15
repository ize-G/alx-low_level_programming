#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be computed
 *
 * Return: int: The result of the conversion
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int length = 0;
	int digits = 0;
	int f = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digits = s[i] - '0';
			if (j % 2)
				digits = -digits;
			n = n * 10 + digits;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}
