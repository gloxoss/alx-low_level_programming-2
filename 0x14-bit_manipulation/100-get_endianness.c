#include "main.h"

/**
  * get_endianness - check endianness
  * Return: 0
  */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	return (*endian == 1);
}
