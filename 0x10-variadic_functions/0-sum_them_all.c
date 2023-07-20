#include"variadic_functions.h"
/**
  *sum_them_all - adds all the parameter
  *@n: the number of parameters
  *Return: always int
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list all;

	if (n == 0)
	{
		return (0);
	}
	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all, int);

	}
	va_end(all);
	return (sum);
}
