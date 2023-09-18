#include "main.h"
/**
*_isupper - entry point
*
*@c: the int to print
*
*Return: always 0 (success)
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
