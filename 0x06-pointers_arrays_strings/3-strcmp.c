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
 *_strcmp - concatenates two strings. appens the src to dest
 *@s1: string
 *@s2: string
 *Return: 1, 0, -1
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = last_character(s1);
	int s2_len = last_character(s2);
	int i;

	if (s1_len == s2_len)
	{
		for (i = 0; s1[i] != 0; i++)
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			else if (s1[i] < s2[i])
			{
				return (-1);
			}
			else
			{
				return (0);
			}
		}

	}
	else if (s1_len > s2_len)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
