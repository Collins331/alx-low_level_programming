#include "main.h"
/**
*_puts - entry point
*
*@str: the char type to print
*Return: always string (success)
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
