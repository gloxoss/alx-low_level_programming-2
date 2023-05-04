#include "main.h"

/**
  * get_bit - bit at index
  * @n: unsigned long int
  * @index: unsigned int
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n & mask) != 0);
}
