#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string to be added into
 * @src: source string
 *
 * Return: the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int l_dest = 0; /* variable to store the length of string 'dest' */
	int l_src = 0; /* variable to store the length of string 'src' */
	int i = 0; /* loop counter */
	int j = 0; /* helper for string array */

	/* find the length of the dest string */
	while (dest[l_dest] != '\0')
	{
		l_dest++;
	}

	/* find the length of the src string */
	while (src[l_src] != '\0')
	{
		l_src++;
	}

	/* expand the string lenght of dest */
	dest[l_dest] = dest[l_dest + l_src];

	/* copy src into dest overwritting the terminating null */
	for (i = l_dest; i <= (l_dest + l_src); ++i)
	{
		dest[l_dest + j] = src[j];
		j++;
	}

	/* insert the terminating null byte */
	dest[l_dest + l_src + 1] = '\0';

	return (dest);
}
