#include "main.h"
/**
  *_strcmp - compares the strings
  *@s1: the string to compare
  *@s2: the string to compare
  *Return: always 0(success), s1 > s2 = +1.. ,s2 > s1 = -1...
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
