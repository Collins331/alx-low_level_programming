#include"main.h"
/**
  *get_bit - get the bit in the index given
  *@n: the number given
  *@index: the index of the bit to return
  *Return: return the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int byte = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
		return ((n & byte) ? 1 : 0);
}
