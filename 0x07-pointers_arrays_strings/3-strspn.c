#include "main.h"
/**
*_strspn - gets the length of prefix substring
*@s: the string
*@accept: the prefix substring
*Return: always integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
