#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word
 * @str: string to be computed
 *
 * Return: the computed string in uppercase.
 */
char *cap_string(char *str)
{
int i = 0;
int a = 0;
char s[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{

		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}

		for (a = 0; (s[a]); a++)
		{
			if (s[a] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

i++;
	}
	return (str);
}
