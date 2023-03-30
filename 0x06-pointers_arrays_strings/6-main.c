#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = {'E', 'x', 'p', 'e', 'c', 't', ' ', 't', 'h', 'e', ' ',
'b', 'e', 's', 't', '.', ' ', 'P', 'r', 'e', 'p', 'a', 'r', 'e', ' ',
'f', 'o', 'r', ' ', 't', 'h', 'e', ' ', 'w', 'o', 'r', 's', 't', '.',
' ', 'C', 'a', 'p', 'i', 't', 'a', 'l', 'i', 'z', 'e', ' ', 'o', 'n',
' ', 'w', 'h', 'a', 't', ' ', 'c', 'o', 'm', 'e', 's', '.', '\n', 'h',
'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', ' ', 'h', 'e',
'l', 'l', 'o', '-', 'w', 'o', 'r', 'l', 'd', ' ', '0', '1', '2', '3',
'4', '5', '6', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd',
'\t', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.', 'h',
'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\n', '\0'};
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
