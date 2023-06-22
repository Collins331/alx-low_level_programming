#include "main.h"
/**
*print_most_numbers - entry point
*
*Return: always 0(success)
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 && c == 4)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
