#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string of characters to be searched for
 *
 * Return: number of bytes in the segment of string 's' containing the
 *	searched substring (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int len1 = 0, len2 = 0;
	int pointer = 0;
	int i, j;

	for (i = 0; s[i]; i++)
		len1++;
	for (j = 0; accept[j]; j++)
		len2++;
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				pointer++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			return (pointer);
		}
	}
	return (pointer);
}
