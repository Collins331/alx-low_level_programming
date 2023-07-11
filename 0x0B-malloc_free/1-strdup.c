#include "main.h"
/**
  *_strdup - returns pointer to newly allocated space
  *@str: the string parameter
  *Return: always char
  */
char *_strdup(char *str)
{
	unsigned int length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	duplicate = (char *)malloc(length * sizeof(char));

	if (duplicate != NULL)
	{
		strcpy(duplicate, str);
	}

	return (duplicate);
}
