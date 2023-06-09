#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* 0. What's my name */
void print_name(char *name, void (*f)(char *));

/*
 * 1. If you spend too much time thinking about a thing,
 * you'll never get it done
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/* 2. To hell with circumstances; I create opportunities */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* ifndef FUNCTION_POINTERS_H */

