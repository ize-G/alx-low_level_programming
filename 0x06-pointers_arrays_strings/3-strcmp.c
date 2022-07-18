#include "main.h"

/**
 * _strcmp - Compares the values of two string
 *
 * @s1: first string to be used in comparison
 * @s2: Second string to be used in comparison
 *
 * Return: 0 if both strings are identical,
 *	a positive difference of the ASCII characters if string1 > string2
 *	a negative difference if vice-versa
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int len_1 = 0;
	int len_2 = 0;
	int i = 0;

	while (s1[len_1] != '\0')
	{
		len_1++;
	}

	while (s2[len_2] != '\0')
	{
		len_2++;
	}

	for (i = 0; i < len_1 && len_2; ++i)
	{
		if (diff != 0)
		{
			break;
		}

		else
		{
			diff = s1[i] - s2[i];
		}

	}
	return (diff);
}
