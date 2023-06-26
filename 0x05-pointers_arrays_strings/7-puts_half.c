#include "main.h"
/**
*puts_half - entry point
*@str: the string parameter
*/
void puts_half(char *str)
{
	int c;
	int l;

	for (c = 0; str[1] != '\0'; ++c)
		;

	if (c % 2 == 0)
	{
		for (l = 1 / 2; str[l] != '\0'; ++l)
			_putchar(str[l];
	}
	else
	{
		for (l = ((1 - 1) / 2) + 1; str[l] != '\0'; ++l)
			_putchar(str[l]);
	}
	_putchar(str[n]);
}
