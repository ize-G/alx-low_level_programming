#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: the source of the memory to copy
 * @dest: the address in memory to make the copy to
 * @n: the anount of memory in bytes to copy.
 *
 * Return: a pointer to dest (Success)
 *	0 (Failure)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
