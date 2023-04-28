#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: int
  * @argv: char*
  * Return: int
  */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		unsigned char op_code = *(unsigned char *)address;

		printf("%.2x", op_code);

		if (i != bytes - 1)
		{
			putchar(' ');
			address++;
		}
	}

	putchar('\n');
	return (0);
}
