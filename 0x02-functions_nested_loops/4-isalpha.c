#include "main.h"
/**
 * _isalpha- checks if character is lowercase or uppercase
 *@c: character to be checked
 * Return: 1 if character is lowercase, 0 if character is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
