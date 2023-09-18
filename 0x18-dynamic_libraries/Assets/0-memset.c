#include "main.h"
/**
*_memset - fills memory with constant byte
*@s: the character type
*@b: the character type
*@n: an unsigned integer
*Return: always character
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *linc = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (linc);
}
