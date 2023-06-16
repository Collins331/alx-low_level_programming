#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int c, b, a;

	for (c = 48; c < 58; c++)
	{
		for (b = 49; b < 58; b++)
		{
			for (a = 50; a < 58; a++)
			{
				if (a > b && b > c)

				{
					putchar(c);

					putchar(b);

					putchar(a);

					if (c != 55 || b != 56)

					{
						putchar(',');

						putchar(' ');
					}

				}

			}

		}

	}

	putchar('\n');

	return (0);
}
