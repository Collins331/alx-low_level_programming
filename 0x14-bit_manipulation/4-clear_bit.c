#include"main.h"
/**
  *clear_bit - sets the bit value to 0 at given index
  *@n: the number
  *@index: the bit index to change
  *Return: 1 (sucess) or -1 (error)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int byte = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~byte;
	return (1);
}
