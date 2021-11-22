#include <stdio.h>
int prueba(int a, int b)
{
	return (a + b);
}
void *get_op_func(char *s)
{
	if (*s == '+')
		return (array[0].p);
}
int main(void)
{
	struct op
	{
		char *op;
		int (*p)(int a, int b);
	};
	struct op array[] ={
		{"+", prueba},
	};

	int (*get_op_func(char *s))(int, int);
}
