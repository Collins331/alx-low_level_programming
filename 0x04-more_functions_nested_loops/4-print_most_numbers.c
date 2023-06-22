#include "main.h"
/**
*print_most_numbers - entry point
*
*Return: always 0(success)
*/
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50)
		{
			continue;
		}
		else if (c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
