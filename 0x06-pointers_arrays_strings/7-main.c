#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = {'E', 'x', 'p', 'e', 'c', 't', ' ', 't', 'h', 'e',
' ', 'b', 'e', 's', 't', '.', ' ', 'P', 'r', 'e', 'p', 'a',
'r', 'e', ' ', 'f', 'o', 'r', ' ', 't', 'h', 'e', ' ', 'w',
'o', 'r', 's', 't', '.', ' ', 'C', 'a', 'p', 'i', 't', 'a',
'l', 'i', 'z', 'e', ' ', 'o', 'n', ' ', 'w', 'h', 'a', 't',
' ', 'c', 'o', 'm', 'e', 's', '.', '\n', '\0'};
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
