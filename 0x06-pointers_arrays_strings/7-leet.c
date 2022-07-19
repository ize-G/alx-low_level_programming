#include "main.h"

/**
 * leet - computes a string into 1337
 * @str: the string to be computed
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + len) == lower[i] || *(str + len) == upper[i])
			{
				*(str + len) = numbers[i];
			}
		}
		len++;
	}

	return (str);
}
