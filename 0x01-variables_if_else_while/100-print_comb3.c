#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int c, l;



	for (c = 48; c <= 56; c++)

	{

		for (l = 49; l <= 57; l++)

		{

			if (l > c)

			{

				putchar(c);

				putchar(l);

				if (c != 56 || l != 57)

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
