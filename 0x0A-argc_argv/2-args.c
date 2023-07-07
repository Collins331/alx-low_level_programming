#include "main.h"
/**
  *main - entry point
  *@argc: the argument count
  *@argv: the argument array
  *Return: always 0(success)
  */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
	printf("%s\n", argv[c]);
	}
	return (0);
}
