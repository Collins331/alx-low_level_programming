#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int colly;

	for (colly = 0 ; colly < 16 ; colly++)
	{
		if (colly < 10)
		{
			putchar(colly + '0');
		} else
		{
			putchar(colly - 10 + 'a');
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
