#include "main.h"
/**
*swap_int - entry point
*@a: int type to print
*@b: int type to peint
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
