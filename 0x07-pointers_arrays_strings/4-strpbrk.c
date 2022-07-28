#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s : the string to be searched
 * @accept: string with the set of bytes to be searched for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *	or Null if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int len1 = 0, len2 = 0;

	for (i = 0; s[i]; i++)
	{
		len1++;
	}
	for (j = 0; accept[j]; j++)
	{
		len2++;
	}

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return ((s + i));
			}
		}
	}

	return (0);
}
