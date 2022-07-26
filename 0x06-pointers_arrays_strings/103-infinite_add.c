#include "main.h"

/**
 * infinite_add - Sums two arrays and stores the result in a buffer
 * @n1 : First array to be computed
 * @n2 : Second array to be computed
 * @r : Buffer to hold the result
 * @size_r : size of the buffer
 * Return: A pointer to the buffer (Successful)
 *	0 Fail
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0;
	int len_n2 = 0;
	int carry = 0;
	int sum;

	while (*(n1 + len_n1) != '\0')
		len_n1++;
	while (*(n2 + len_n2) != '\0')
		len_n2++;
	n1 += len_n1 - 1;
	n2 += len_n2 - 1;

	if (size_r <= len_n1 + 1 || size_r <= len_n2 + 1)
		return (0);
	*(r + size_r) = '\0';
	
	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		sum = (*n1 - '0') + (*n2 - '0');
		sum += carry;
		*(r + size_r) = (sum % 10) + '0';
		carry = sum / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		sum = (*n1 - '0') + carry;
		*(r + size_r) = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (; *n2; n2--, size_r--)
	{
		sum = (*n2 - '0') + carry;
		*(r + size_r) = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry && size_r >= 0)
	{
		*(r + size_r) = (carry % 10) + '0';
		return (r + size_r);
	}
	else if (carry && size_r < 0)
		return (0);

	return (r + size_r + 1);
}
