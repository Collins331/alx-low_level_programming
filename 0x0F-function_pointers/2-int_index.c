#include "function_pointers.h"
/**
  *int_index - function that searches for an integer
  *@array: the array given
  *@size: the number of elements in the array
  *@cmp: a pointer to the function to be used to compare values
  *Return: Nothing
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
