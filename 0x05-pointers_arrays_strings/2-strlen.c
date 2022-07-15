#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: string whose lenght would be computed
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != 0)
{
i++;
}
return (i);
}
