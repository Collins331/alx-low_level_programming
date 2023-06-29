#include "main.h"
/**
  *string_toupper - changes all lowercase letters to uppercase
  *@str: the string to change
  *Return: always uppercase characters
  */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
