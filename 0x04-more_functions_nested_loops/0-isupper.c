#include "main.h"
/**
 * _isupper- checks whether a character is uppercase
 * @c: character to be checked
 * Return: 1 if checked character is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
