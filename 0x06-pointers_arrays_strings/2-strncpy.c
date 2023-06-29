#include "main.h"
/**
  *_strncpy - concatenates a string
  *@dest: the string to print
  *@src: the string to concatenate
  *@n: the integer to determine bytes
  *Return: always return a string(success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (result);
}
