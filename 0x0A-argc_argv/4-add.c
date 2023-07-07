#include "main.h"
/**
  *main - entry point
  *@argc: the argument count
  *@argv: the argument array
  *Return: always 0(success)
  */
int main(int argc, char *argv[])
{
	int result = 0, i, j;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(num);
	}
	printf("%d\n", result);

	return (0);
}
