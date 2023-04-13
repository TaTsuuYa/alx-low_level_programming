#ifndef MAIN_H
#define MAIN_H

/* 0. Trust no one */
void *malloc_checked(unsigned int b);

/* 1. string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* 2. _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* 3. array_range */
int *array_range(int min, int max);

#endif

