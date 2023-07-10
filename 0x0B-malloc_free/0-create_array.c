#include "main.h"
/**
  *create_array - creates an array of chars
  *@size: the integer size
  *@c: the array of char
  *Return: always char
  */
char *create_array(unsigned int size, char c)
{
	char *l;

	l = malloc((c * size));

	if (size == 0)
	{
		return (NULL);
	}
	return (l);
}
