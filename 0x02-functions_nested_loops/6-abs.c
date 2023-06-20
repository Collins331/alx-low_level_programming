#include "main.h"
/**
*_abs - entry point
*
*@n: int type
*
*Return: always 0(success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
