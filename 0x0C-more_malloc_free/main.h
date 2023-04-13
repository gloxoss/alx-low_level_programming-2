#ifndef MAIN_H
#define MAIN_H

void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);

#endif /* MAIN_H */
