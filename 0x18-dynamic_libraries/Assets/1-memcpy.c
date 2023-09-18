#include "main.h"
/**
*_memcpy - copies memory area
*@dest: the memory to paste to
*@src: the memory source to be copied
*@n: the bytes integer
*Return: always character (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *collins = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (collins);
}
