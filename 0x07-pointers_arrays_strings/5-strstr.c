/**
 * needle_len - returns the lenght of strstr's parameter needle
 * @needle: str
 * Return: a positive number
 */
int needle_len(char *needle)
{
	int i;

	for (i = 0; needle[i] != 0; i++)
	{}
	return (i - 1);
}
/**
 * _strstr - locates a substring into a string
 * @haystack: string to scan
 * @needle: string to find
 * Return: a pointer to the biggining of the substr otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	int index = 0;
	int aux = 0;
	int count = 0;

	for (index = 0; haystack[index] != 0; index++)
	{
		for (; needle[aux] != 0; )
		{
			if (haystack[index] == needle[aux])
			{
				count++;
				aux++;
			}
			else
			{
				count = 0;
				aux = 0;
			}
		}
		if (needle_len(needle) == count)
		{
			return (&haystack[index - count]);
		}
	}

	return (0);
}
