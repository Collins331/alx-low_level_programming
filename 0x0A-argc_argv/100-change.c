#include "main.h"
/**
  *calculateCoins - determines the change to return
  *@cents: the amount for change
  *Return: always integer (success)
  */
int calculateCoins(int cents)
{
	int coins[4], numCoins, count, i;

	if (cents < 0)
	{
		return (0);
	}
	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 5;
	coins[3] = 1;
	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

		for (i = 0; i < numCoins; i++)
		{
			count += cents / coins[i];
			cents %= coins[i];
		}
		return (count);

}
/**
  *main - entry point
  *@argc: counts the number of arguments passed
  *@argv: are the arguments passed
  *Return: always 0(success)
  */
int main(int argc, char *argv[])
{
	int cents;
	int minCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	minCoins = calculateCoins(cents);

	printf("%d\n", minCoins);

	return (0);
}
