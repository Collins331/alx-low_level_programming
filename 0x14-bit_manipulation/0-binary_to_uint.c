#include"main.h"
/**
  *binary_to_uint - converts binary to int
  *@b: the string to convert
  *Return: the converted value(success)
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[base] != '\0')
	{
		if (b[base] != '1' && b[base] != '0')
		{
			return (0);
		}
		else
		{
			if (b[base] == '1')
			{
				num = (num << 1) | 1;
			}
			else if (b[base] == '0')
			{
				num <<= 1;
			}
		}
		base++;
	}
	return (num);
}
