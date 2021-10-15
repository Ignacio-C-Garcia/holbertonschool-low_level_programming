/**
 * last_character - return de lenght of a string including \0
 * @s: a string
 * Return: int
 */
int last_character(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}

	return (count);
}

/**
 *_strncpy - copy the src to dest
 *@dest: destination
 *@src: string
 *@n: int
 *Return: final array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy = 0;
	int src_lenght = last_character(src);

	for (copy = 0; copy < n && copy <= src_lenght; copy++)
	{
		dest[copy] = src[copy];
	}
	for (; copy < n; copy++)
	dest[copy] = '\0';

	return (dest);
}
