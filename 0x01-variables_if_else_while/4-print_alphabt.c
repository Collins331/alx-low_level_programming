#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char Colly;

	for (Colly = 'a' ; Colly <= 'z' ; Colly++)
	{
		if (Colly != 'e' && Colly != 'q')
		{
			putchar(Colly);
		}
	}
	{
		putchar ('\n');
	}
	return (0);
}
