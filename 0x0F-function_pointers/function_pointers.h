#ifndef MAIN_H_
#define MAIN_H_
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int _putchar(char c);
#endif
