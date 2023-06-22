#include "main.h"
/**
*print_line - entry point
*
*@n: the int to print
*
*Return: always 0(success)
*/
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
