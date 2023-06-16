#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int c;

	for (c = 48; c < 58; c++)

	{

		putchar(c);

	if (c != 57)

	{

		putchar(',');

		putchar(' ');

	}

	}

		putchar('\n');

	return (0);
}
