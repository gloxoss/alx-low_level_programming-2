#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: int
  * @argv: char
  * Return: int
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%ld\n", strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10));
	return (0);
}
