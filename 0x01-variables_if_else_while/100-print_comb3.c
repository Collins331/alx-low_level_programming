#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int coll, lins;

	for (coll = 0 ; coll < 10 ; coll++)
	{
		for (lins = 0 ; lins < 10 ; lins++)
		{
			putchar(coll + '0');
			putchar(lins + '0');

			if (coll != 9 || lins != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
