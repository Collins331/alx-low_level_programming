#include "main.h"
/**
* more_numbers - entry point
*
*Return: always 0 (success)
*/
void more_numbers(void)
{
	int c;
	int l;

	for (c = 0; c < 10; c++)
	{
		for (l = 0; l < 15; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
