#include "function_pointers.h"

/**
  *print_name - prints a name
  *@name: the parameter
  *@f: the function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	(*f)(name);

}
