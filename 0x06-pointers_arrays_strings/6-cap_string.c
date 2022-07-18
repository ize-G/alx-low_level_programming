#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word
 * @str: string to be computed
 *
 * Return: the computed string in uppercase.
 */
char *cap_string(char *str)
{
int i, a;
char s[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (str[i])
{
	if (i == 0 && (str[i] >= 97 && str[i] <= 122))
	{
		str[i] = str[i] - 32;
		++i;
	}

	for (a = 0; a < 13; ++a)
	{

		if (s[a] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
}
return (str);
}
