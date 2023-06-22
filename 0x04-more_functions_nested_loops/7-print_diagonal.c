#include "main.h"
/**
*print_diagonal - entry point
*
*@n: the int to print
*
*Return: always 0(success)
*/
void print_diagonal(int n)
{
	int c;
	int l;

	for (c = 0; c < n; c++)
	{
		for (l = 0; l < c; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (c < 1)
	{
	_putchar('\n');
	}
}
