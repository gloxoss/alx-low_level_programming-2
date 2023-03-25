#include "main.h"

/**
  * print_numbers - print from 0 to 9
  * Return: void
  */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
