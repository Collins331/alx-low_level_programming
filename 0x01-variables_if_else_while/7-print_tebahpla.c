#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char snilloc;

	for (snilloc = 'z' ; snilloc >= 'a' ; snilloc--)
	{
		putchar(snilloc);
	}
	{
		putchar('\n');
	}
	return (0);
}
