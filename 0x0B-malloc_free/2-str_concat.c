#include "main.h"
/**
  *str_concat - concatenates two strings
  *@s1: the string
  *@s2: the string
  *Return: always char
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int c;
	char *i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	c = strlen(s1) + strlen(s2) + 1;
	i = (char *) malloc(sizeof(char) * c);

	if (i == NULL)
	{
		return (NULL);
	}
	strcpy(i, s1);
	strcat(i, s2);

	return (i);
}
