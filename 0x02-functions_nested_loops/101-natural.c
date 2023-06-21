#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* main - entry point
*
* Description: Print the sum of all multiples of 3 or 5 below 1024.
* Return: always 0(success)
 */
int main(void)
{
	int c = 1;
	int total = 0;

	while (c < 1024)
	{
		if (c % 3 == 0)
			total += c;
		else if (c % 5 == 0)
			total += c;

		c++;
	}
	printf("%d\n", total);

	return (0);
}
