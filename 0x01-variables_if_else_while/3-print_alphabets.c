#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char Collins;

	for (Collins = 'a' ; Collins <= 'z' ; Collins++)
	{
		putchar(Collins);
	}
	for (Collins = 'A' ; Collins <= 'Z' ; Collins++)
	{
		putchar(Collins);
	}
	{
		putchar('\n');
	}
	return (0);
}
