/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: a string
 * Return: first ocurrence otherwise null
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0;
	int aux = 0;

	for (index = 0; s[index] != 0; index++)
	{
		for (aux = 0; accept[aux] != 0; aux++)
		{
			if (s[index] == accept[aux])
			{
				return (s + index);
			}
		}
	}

	return (0);
}
