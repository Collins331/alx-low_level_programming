#include "main.h"
/**
*print_number - entry point
*
*@n: int to print
*/
void print_number(int n)
{
	int colly;

	if (n < 0)
	{
		colly = -n;
		_putchar('-');
	}
	else
	{
		colly = n;
	}
	if (colly / 10)
	{
		print_number(colly / 10);
	}
	_putchar((colly % 10) + '0');
}
