/**
 * leet - a function
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	char min[] = {'a', 'e', 'o', 't', 'l'};
	char may[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	int i;
	int x;

	for (i = 0; str[i] != 0; i++)
	{
		for (x = 0; x <= 4; x++)
		{
			if (str[i] == min[x] || str[i] == may[x])
			{
				str[i] = num[x] + '0';
			}
		}
	}

	return (str);
}
