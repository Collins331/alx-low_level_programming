#include"main.h"
/**
  *set_bit - sets the value of a bit a given index to 1
  *@n: the pointer to the number
  *@index: the given index
  *Return: 1 (success) or -1(failed)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int byte = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= byte;

	return (1);
}
