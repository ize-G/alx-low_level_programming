#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Sums two arrays and stores the result in a buffer
 * @n1 : First array to be computed
 * @n2 : Second array to be computed
 * @r : Buffer to hold the result
 * @r_index : current index of the buffer.
 * Return: A pointer to the buffer (Successful)
 *	0 Fail
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int sum, carry = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		sum = (*n1 - '0') + (*n2 - '0');
		sum += carry;
		*(r + r_index) = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		sum = (*n1 - '0') + carry;
		*(r + r_index) = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		sum = (*n2 - '0') + carry;
		*(r + r_index) = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry && r_index >= 0)
	{
		*(r + r_index) = (carry % 10) + '0';
		return (r + r_index);
	}

	else if (carry && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - saves the results of the addition in the buffer.
 * @n1: the first string of numbers to be computed.
 * @n2: the second string of numbers to be computed.
 * @r: the buffer to store the results.
 * @size_r: the size of the array
 *
 * Return: The computed string (Success)
 *	0 (fail)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, len_n1 = 0, len_n2 = 0;

	for (index = 0; *(n1 + index); index++)
		len_n1++;

	for (index = 0; *(n2 + index); index++)
		len_n2++;

	if (size_r <= len_n1 + 1 || size_r <= len_n2 + 1)
		return (0);

	n1 += len_n1 - 1;
	n2 += len_n2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
