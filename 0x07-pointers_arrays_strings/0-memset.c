#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the value to use in filling the specified memory area
 * @n: the size of memory to fill
 *
 * Return: a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
