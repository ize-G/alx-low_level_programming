#include "main.h"

/**
 * _strncpy - copies specified number of bytes from source string
 *to destination string.
 * @dest: destination string to be added into
 * @src: source string
 * @n: number of bytes to use from src
 *
 * Return: the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l_dest = 0; /* variable to store the length of string 'dest' */
	int j = 0; /* helper for tracking the copying process */

	while (l_dest < n && src[l_dest])
	{
		dest[j] = src[j];
		j++;
		l_dest++;
	}

	/* insert teminating null byte, look here first for bugs */
	while (l_dest < n)
	{
		dest[l_dest] = '\0';
		l_dest++;
	}

	return (dest);
}
