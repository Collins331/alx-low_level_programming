#include <stdio.h>
#include<stdlib.h>
/**
  *main - entry point
  *@agrc: the argument count
  *@agrv: the the argument
  *Return: always 0(success)
  */
int main(int agrc, char *agrv[])
{
	int i, byte;
	char *array;

	if (agrc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(agrv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < byte; i++)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
