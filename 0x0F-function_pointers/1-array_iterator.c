#include "function_pointers.h"
/**
  *array_iterator - executes function given as a parameter
  *@array: an array
  *@size: size of array
  *@action: the function to be executed
  *Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
