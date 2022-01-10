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
 *_strncat - concatenates two strings. appens the src to dest
 *@dest: destination
 *@src: string
 *@n: int
 *Return: final array
 */
char *_strncat(char *dest, char *src, int n)
{
	int paste = last_character(dest);
	int copy = 0;
	int src_lenght = last_character(src);

	if (n > src_lenght)
	{
		n = src_lenght;
	}

	for (copy = 0; copy < n; copy++)
	{
		dest[paste] = src[copy];
		paste++;
	}
	dest[paste] = '\0';

	return (dest);
}
