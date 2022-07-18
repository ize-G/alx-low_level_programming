#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 *	to uppercase.
 * @str: string to be computed
 *
 * Return: the computed string in uppercase.
 */
char *string_toupper(char *str)
{
int i = 0;
char s[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '{'};
int a = 0;
int len = 13;

while (str[i] != '\0')
{
while (a < len)
{
if ((i == 0 || str[i - 1] == s[a]) && str[i] >= 97 && str[i] <= 122)

{
str[i] = str[i] - 32;
}
i++;
}
a++;

}

return (str);
}
