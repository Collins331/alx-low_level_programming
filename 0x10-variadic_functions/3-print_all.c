#include "variadic_functions.h"
/**
  *print_all - prints anything
  *@format: list of all types arguments
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list all;
	char *s, *separator;

	va_start(all, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(all);
}
