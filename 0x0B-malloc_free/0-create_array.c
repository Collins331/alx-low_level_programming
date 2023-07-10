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
	unsigned int i;

	l = (char *)malloc((sizeof(c) * size));

	if (size == 0)
	{
		return (NULL);
	}
	if (l == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		l[i] = c;
	}


	return (l);
}
