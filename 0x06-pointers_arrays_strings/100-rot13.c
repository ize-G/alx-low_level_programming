#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a given string using rot13
 *
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int len_alp = 0;
	int i = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (len_alp = 0; len_alp < 52; len_alp++)
		{
			if (*(str + i) == alp[len_alp])
			{
				*(str + i) = rot13[len_alp];
				break;
			}
		}
		i++;
	}
	return (str);
}
