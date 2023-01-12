#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
/**
 * _putchar - A new type describing a dog.
 * @c: character
 * Return: 0
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTER_H */
