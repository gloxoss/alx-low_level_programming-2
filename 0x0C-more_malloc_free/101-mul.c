#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiply two positive numbers
 * @num1: int
 * @num2: int
 * Return: int
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point
 * @argc: int
 * @argv: char**
 * Return: int
 */
int main(int argc, char **argv)
{
	char *endptr;
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtol(argv[1], &endptr, 10);

	if (*endptr != '\0')
	{
		printf("Error\n");
		return (98);
	}

	num2 = strtol(argv[2], &endptr, 10);

	if (*endptr != '\0')
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
