#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int c, l;

	for (c = 0; c < 100; c++)

	{
		for (l = 0; l < 100; l++)
		{
			if (c < l)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				if (c != 98 || l != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);

}
