#include <stdio.h>
#include <stdlib.h>

/**
  * isNum - is numeric
  * @str: char
  * Return: int
  */
int isNum(const char *str)
{
    while(*str != '\0')
    {
        if(*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
  * main - Entry point
  * @argc: int
  * @argv: char
  * Return: int
  */
int main(int argc, char *argv[])
{
	long int i, n, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		n = strtol(argv[i], NULL, 10);
		
		if (n > 0)
			sum += n;
	}

	printf("%ld\n", sum);
	return (0);
}
