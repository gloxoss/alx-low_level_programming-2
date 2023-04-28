#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: int
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int)time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		putchar(r);
	}
	putchar(2772 - c);
	putchar('\n');
	return (0);
}
