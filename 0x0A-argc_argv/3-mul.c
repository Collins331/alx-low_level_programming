#include "main.h"
/**
  *main - entry point
  *@argc: the argument count
  *@argv: the argument array
  *Return: always 0(success)
  */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
