#include"variadic_functions.h"
/**
  *print_strings - prints string
  *@separator: string printed between strings
  *@n: the number of parameter
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	const char *str;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(string);

	printf("\n");
}
