int identify(char character)
{
	//11 lenght
	char simb[] = {' ', 9, '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	int i;

	for (i = 0; i <= 11; i++)
	{
		if (character == simb[i])
		{
		return (1);
		}
	}
	return (0);
}
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{

		if (identify(c[i]) == 1)
		{
			if (c[i + 1] > 97 && c[i + 1] < 122)
			{
			c[i + 1] = c[i + 1] - 32;
			}
		}
	}
	return (c);
	}
