#include "main.h"
/**
*_isdigit - entry point
*
*@c: the int to print
*
*Return: always 0(success)
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
