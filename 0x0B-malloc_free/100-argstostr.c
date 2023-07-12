#include "main.h"
/**
  *argstostr  - concatenates all the arguments of the program
  *@ac: the argument count
  *@av: the argument
  *Return: always characters (success)
  */
char *argstostr(int ac, char **av)
{
	int totalLength = 0;
	int i;
	char *result;
	int current_index, argLength;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}
	result = (char *)malloc((totalLength + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		argLength = strlen(av[i]);
		strncpy(result + current_index, av[i], argLength);
		current_index += argLength;

		result[current_index++] = '\n';
	}
	result[current_index] = '\0';

	return (result);
}
