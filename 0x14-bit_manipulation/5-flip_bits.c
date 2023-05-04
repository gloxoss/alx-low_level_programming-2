#include "main.h"

/**
  * flip_bits - get bits needed to flip
  * @n: unsigned long int
  * @m: unsigned long int
  * Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor != 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}
	return (bits);
}
