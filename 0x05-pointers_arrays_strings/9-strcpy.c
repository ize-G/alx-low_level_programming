#include "main.h"

/**
 * *_strcpy - copies string from one dereferenced location to another
 * @dest: destination to be copied to
 * @src: destination to be copied from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
