#ifndef _main_h_
#define _main_h_

#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
int _putchar(char c);

#endif
