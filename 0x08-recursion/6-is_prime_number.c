#include "main.h"
/**
  *is_prime_number - returns 1 if the input integer is a prime number
  *@n: an integer
  *Return: always integer 1(success) 0(not prime number)
  */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
