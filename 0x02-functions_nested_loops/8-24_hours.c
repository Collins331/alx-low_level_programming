#include "main.h"
/**
*jack_bauer - entry point
*
*Return: always 0 (success)
*/
void jack_bauer(void)
{
	int t = 0;
	int x = 0, y = 0, z = 0, a = 0;

	while (t < 1440)/*60*24=1440*/
	{
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(':');
		_putchar(z + '0');
		_putchar(a + '0');
		_putchar('\n');

		a++;
		if (a > 9)
		{
			a = 0;
			z++;
		}
		if (z > 5)
		{
			z = 0;
			y++;
		}
		if (y > 9)
		{
			y = 0;
			x++;
		}
		t++;
	}
}
