#include "main.h"
/**
*_isalpha - entry point
*
*@c: char type
*
*Return: always 1 (success)
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
