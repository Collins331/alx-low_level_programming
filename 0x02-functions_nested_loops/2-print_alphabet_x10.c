#include "main.h"
/**
*print_alphabet_x10 - entry point
*
*Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int c;
	char l;

	for (c = 0; c < 10; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
