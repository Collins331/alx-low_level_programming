#include "main.h"
/**
  *reverse_array - reverses the array provided
  *@a: an array of integers
  *@n: the number of elements to reverse
  */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
