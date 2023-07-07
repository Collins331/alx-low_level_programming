#include "main.h"
/**
  *main - entry point
  *@argc: the argument count
  *@argv: the argument array
  *Return: always 0(success)
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
