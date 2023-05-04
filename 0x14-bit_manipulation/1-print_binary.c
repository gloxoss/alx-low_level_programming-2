#include "main.h"

/**
  * print_binary - int to binary
  * @n: unsigned long int
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int one = 1UL << (sizeof(n) * 8 - 1);

	while (one > n)
		one >>= 1;
	while (one)
	{
		_putchar((n & one) ? '1' : '0');
		one >>= 1;
	}
}
