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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
		argc++;
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
