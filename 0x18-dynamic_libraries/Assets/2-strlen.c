#include "main.h"
/**
*_strlen - entry point
*@s: the char type to print
*Return: always int value (success)
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
