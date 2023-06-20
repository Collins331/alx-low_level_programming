#include "main.h"
#include <stdio.h>
/**
*print_alphabet - entry point
*
*Return: Always 0(success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
