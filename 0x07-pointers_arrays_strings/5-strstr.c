#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring with a main string
 * @haystack: the main string to be searched
 * @needle: the substring to find
 *
 * Return: the located substring (Success)
 *	Null if fail.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, length = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i]; i++)
		length++;
	for (i = 0; i < length; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
