#include "main.h"

/**
  * print_binary - int to binary
  * @n: unsigned long int
  * Return: void
  */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int i = 0;
	int print = 0;

	for (i = size - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;

		if (bit == 1)
			print = 1;
		if (print == 1)
			_putchar(bit + '0');
	}
	if (print == 0)
		_putchar('0');
}
