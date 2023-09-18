#include "main.h"
/**
  *_strpbrk - searches string for any set of bytes
  *@s: the character type
  *@accept: the string
  *Return: always character
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
