#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word
 * @str: string to be computed
 *
 * Return: the computed string in uppercase.
 */
char *cap_string(char *str)
{
int i;
char s[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int a = 0;
int len = 13;

while (str[i])
{
	for (a = 0; a < len; a++)
	{
		if ((i == 0 || str[i - 1] == s[a]) && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			++i;
		}
	}
}
return (str);
}
