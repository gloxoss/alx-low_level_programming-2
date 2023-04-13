#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - two strings concatenation
  * @s1: char*
  * @s2: char*
  * Return: char*
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, size, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	str = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
