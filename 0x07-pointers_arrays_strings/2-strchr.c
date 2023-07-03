#include "main.h"
/**
*_strchr - locates a character in a string
*@s: the string
*@c: the character to locate
*Return: always character (success)
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
