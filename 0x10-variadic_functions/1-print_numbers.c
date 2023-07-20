#include "variadic_functions.h"
/**
  *print_numbers - prints all numbers given as parameter
  *@separator: string to be printed between numbers
  *@n: the number of integer passed to the function
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int j;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(num, int);
		printf("%d", j);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
