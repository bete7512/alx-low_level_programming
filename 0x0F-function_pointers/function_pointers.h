#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
void array_iterator(int *array, unsigned int size, void (*action)(int));
char _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
#endif
