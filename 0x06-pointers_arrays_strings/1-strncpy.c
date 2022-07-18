#include "main.h"

/**
 * _strncat - concatenates two strings using specified number of bytes
 * @dest: destination string to be added into
 * @src: source string
 * @n: number of bytes to use from src
 *
 * Return: the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l_dest = 0; /* variable to store the length of string 'dest' */
	int j = 0; /* helper for tracking the copying process */

	/* find the length of the dest string */
	while (dest[l_dest])
	{
		l_dest++;
	}

	while (j < n && src[j] != '\0')
	{
		/* copy src into dest overwritting the null byte */
		dest[l_dest] = src[j];
		j++;
		l_dest++;
	}

	/* insert teminating null byte, look here first for bugs */
	dest[l_dest + n + 1] = '\0';

	return (dest);
}
