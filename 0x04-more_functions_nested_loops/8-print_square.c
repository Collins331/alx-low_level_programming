#include "main.h"
/**
*print_square - entry point
*
*@size: the int to print
*
*Return: always 0 (success)
*/
void print_square(int size)
{
	int c;
	int l;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (c = 0; c < size; c++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
