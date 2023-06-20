#include "main.h"
/**
*print_last_digit - entry point
*
*@c: int letter
*
*Return: always 0 (success)
*/
int print_last_digit(int c)
{
	int l;

	if (c < 0)
	{
		l = -1 * (c % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = c % 10;
		_putchar(l + '0');
		return (l);
	}
}
