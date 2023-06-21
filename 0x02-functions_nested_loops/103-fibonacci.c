#include <stdio.h>

/**
* main - entry point
*
* Description: Print the sum of even Fibonacci numbers up to a fib value
*
* not exceeding 4,000,000.
*
* Return: always 0 (success)
*/
int main(void)
{
	int c = 1, l = 2, total = 0;
	int z;

	while (l < 4000000)
	{
		if (l % 2 == 0)
			total += j;

		z = l;
		l += c;
		c = z;
	}
	printf("%d\n", total);
	return (0);
}
