#include "main.h"
/**
*_putchar - entry point
*
*@c: the character to print
*
*Return: Always 1 (success)
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
