#include <unistd.h>
/**
*_putchar - entry point that declare _putchar() function
*
*@c: the character to print
*
*Return: Always 1 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
