/**
 * print_name - call a function with a parameter
 * @name: a name
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
