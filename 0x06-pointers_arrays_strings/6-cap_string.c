/**
 * identify - a cunction that detect specific simbols
 * @character: a character
 * Return: 1 if the parameter is a specific simbol otherwise 0
 */
int identify(char character)
{
	char simb[] = {' ', 9, 10,
		';', '.', ',', 33, 63, '"', '(', ')', '{', '}'};

	int i;

	for (i = 0; i <= 12; i++)
	{
		if (character == simb[i])
		{
		return (1);
		}
	}
	return (0);
}
/**
 * cap_string - a function that capitalizes all words of a string.
 * @c: a string
 * Return: changed string
 */
char *cap_string(char *c)
{
	int i;

	if (c[0] >= 97 && c[0] <= 122)
		c[0] = c[0] - 32;

	for (i = 0; c[i] != 0; i++)
	{

		if (identify(c[i]) == 1)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
			c[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (c);
	}
