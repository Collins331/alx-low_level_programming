#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0;

	while (m < 8)
	{
		n = 0;

		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		m++;
	}
}
