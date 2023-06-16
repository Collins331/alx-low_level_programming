#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int coll, lins;

	for (coll = 0 ; coll <= 9 ; coll++)
	{
		for (lins = coll + 1 ; lins <= 9 ; lins++)
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
