/**
 * _strchr - finds a specific character
 * @s: a string
 * @c: a character
 * Return: a pointer to the first occurrence of the character c, otherwise null
 **/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != 0; index++)
	{
		if (s[index] == c)
		{
			return (&s[index - 1]);
		}
	}

	return (0);
}
