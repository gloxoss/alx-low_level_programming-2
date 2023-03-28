#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	if (freopen("/dev/null", "w", stderr) == NULL) {
        // handle error redirecting stderr
    	}
	return (0);
}
