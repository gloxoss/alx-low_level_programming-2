#include "main.h"

/**
  * clear_bit - set to 0 at given index
  * @n: unsigned long int*
  * @index: unsigned int
  * Return: int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
