#include "main.h"
/**
  *_strlen_recursion - returns length of a string
  *@s: the string
  *Return: always integer(success)
  */
int _strlen_recursion(char *s)
{
	/*int c*/;

	if (*s == '\0')
	{
		return 0;
	}

	return (1 + (_strlen_recursion(s + 1)));
}
