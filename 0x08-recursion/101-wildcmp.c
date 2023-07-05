#include "main.h"
/**
  *wildcmp - compares two strings
  *@s1: the first string
  *@s2: the second string
  *Return: always integer
  */
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2) ? 1 : 0);
}
/**
  *helper - a boolean to compare the string
  *@s1: the string one
  *@s2: the string two
  *Return: always 1(true) 0(false)
  */
bool helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (true);
	}
	if (*s2 == '\0')
	{
		return (false);
	}
	if (*s2 == '*')
	{
		return (helper(s1, s2 + 1) || helper(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (helper(s1 + 1, s2 + 2));
	}
	return (false);
}
