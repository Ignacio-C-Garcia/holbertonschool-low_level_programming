/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: a string
 * Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	int index = 0;
	int aux = 0;
	unsigned int count = 0;

	for (index = 0; s[index] != 0; index++)
	{
		for (aux = 0; accept[aux] != 0; aux++)
		{
			if (s[index] == accept[aux])
			{
				count++;
				break;
			}
		}
		if (accept[aux] == 0)
			return (count);
	}

	return (count);
}
