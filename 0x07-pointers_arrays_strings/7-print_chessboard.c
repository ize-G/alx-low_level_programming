#include "main.h"

/**
 * print_chessboard - prints out the elements of a passed array
 *
 * @a: Pointer to the array to be printed
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][j]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
