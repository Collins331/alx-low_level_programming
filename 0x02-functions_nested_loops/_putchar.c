#include <unistd.h>
/**
*_putchar - entry point that declare _putchar() function
*
*@l: the character to print
*
*Return: Always 1 (success)
*/
int _putchar(char l)
{
	write(1, &l, 1);
	return (1);
}
