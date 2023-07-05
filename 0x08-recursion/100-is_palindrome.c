 #include "main.h"
/**
  *is_palindrome - returns 1 if a string is a parlindrime or else 0
  *@s: the string
*Return: always integer 1(true) 0(false)
*/
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (tester(s, 0, len - 1) ? 1 : 0);
}
/**
  *tester - determines the string to compare bidirectionally
  *@s: the string
  *@start: the start of the string
  *@end: the end of string
  *Return: a boolean value true or false
  */

bool tester(char *s, int start, int end)
{
	if (start >= end)
	{
		return (true);
	}
	if (s[start] != s[end])
	{
		return (false);
	}
	return (tester(s, start + 1, end - 1));
}
