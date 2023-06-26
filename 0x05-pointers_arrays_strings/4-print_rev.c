#include "main.h"
/**
*print_rev - entry point
*@s: the char type to print
*/
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)/* calculate length of the string*/
	

	for (length--; length >= 0; length--)/* prints string in reverse order*/
	
		_putchar(s[length]);
	
	_putchar('\n');
	
}
