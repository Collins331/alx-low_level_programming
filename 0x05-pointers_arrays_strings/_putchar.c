#include "main.h"
/**
*_putchar - entry point
*
*@c: the char type to print
*
*Return: always 0(success)
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
