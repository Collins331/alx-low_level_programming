#include "main.h"
/**
  *_sqrt_recursion - returns natural square root of a number
  *@n: the number given
  *Return: always integer (success)
  */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(n, 0, n));
}

int _sqrt(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	if (square > n)
	{
		return (_sqrt(n, start, mid -1));
	}
	return (_sqrt(n, mid + 1, end));
}
