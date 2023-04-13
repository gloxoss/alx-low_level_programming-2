#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: int
  * @argv: char
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int c = 0;
	int remaining, p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remaining = atoi(argv[1]);

	if (remaining < 0)
	{
		putchar('\n');
		return (0);
	}

	for (p = 0; p < 5; p++)
	{
		int num_coins = remaining / coins[p];

		c += num_coins;
		remaining -= num_coins * coins[p];
	}

	printf("%d\n", c);
	return (0);
}
