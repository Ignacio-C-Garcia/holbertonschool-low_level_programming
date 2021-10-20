/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	int counter = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (counter + _strlen_recursion(s + 1));
	}
}
