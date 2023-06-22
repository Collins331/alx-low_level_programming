#include "main.h"
/**
*print_triangle - entry point
*
*@size: the int to print
*/
void print_triangle(int size)
{
	int c;
	int l;
	int z;

	l = size - 1;
	for (c = 0; c < size; c++)
	{

		for (l = size - 1 - c; l > 0; l--)
		{
			_putchar(' ');
		}
		for (z = c + 1; z > 0; z--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
