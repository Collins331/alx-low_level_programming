#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of its parameters.
 * @n:  the number of arguments
 * Return: Always integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;

	unsigned int i;

	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	
	va_start(all, n);
	
	for (i = 0; i < n; i++)
		{
		sum += va_arg(all, int);
		}
	va_end(all);
	return (sum);
}
