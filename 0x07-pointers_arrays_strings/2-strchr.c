/**
 * _strchr - finds a specific character
 * @s: a string
 * @c: a character
 * Return: a pointer to the first occurrence of the character c, otherwise null
 **/
char *_strchr(char *s, char c)
{
int index;
int count;

for (index = 0; s[index] != 0; index++)
{
	count++;
}
for (index = 0; index < count; index++)
{
	if (s[index] == c)
	{
	return (s + index);
	}
}

return (0);
}
