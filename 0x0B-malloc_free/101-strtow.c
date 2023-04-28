#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts number of words in a string
 * @s: char*
 * Return: int
 */
int count_word(char *s)
{
	int y, z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
		{
			continue;
		}

		if (y == 0 || s[y - 1] == ' ')
		{
			z++;
		}
	}
	return (z);
}

/**
 * strtow - splits a string into words
 * @str: char*
 * Return: char**
 */
char **strtow(char *str)
{
	char **a, *b;
	int i, k = 0, len = 0, words, c = 0, start, end;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	a = (char **)malloc(sizeof(char *) * (words + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				b = (char *)malloc(sizeof(char) * (c + 1));

				if (b == NULL)
					return (NULL);

				while (start < end)
					*b++ = str[start++];

				*b = '\0';
				a[k] = b - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	a[k] = NULL;
	return (a);
}
