#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s : pointer to the string to be computed.
 *
 * Return: The lenght of the string (Success)
 *	0 (Fail)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
