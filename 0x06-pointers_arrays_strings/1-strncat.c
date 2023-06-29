#include "main.h"
/**
  *_strncat - concatenates the string
  *@dest: the string to print
  *@src: the string to be concatenated
  *@n: the integer to specify the bytes
  *Return: always a string(success)
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
