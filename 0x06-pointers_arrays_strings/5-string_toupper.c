/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: a string
 * Return: the modified string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);

}
