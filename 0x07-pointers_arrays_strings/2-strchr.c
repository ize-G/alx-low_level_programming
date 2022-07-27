#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be computed
 * @c: the character to be found
 *
 * Return: a pointer to the first occurence of the character (Success)
 *	0 if the character is not found (Fail)
 */
char *_strchr(char *s, char c)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	for (i = 0; len >= 0; i++, len--)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
	}

	return (0);
}
