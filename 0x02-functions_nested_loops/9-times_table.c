#include "main.h"
/**
*times_table - entry point
*
*Return: always 0(success)
*/
void times_table(void)
{
	int a;/*factor*/
	int b;/*count*/
	int c;/*result*/

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
