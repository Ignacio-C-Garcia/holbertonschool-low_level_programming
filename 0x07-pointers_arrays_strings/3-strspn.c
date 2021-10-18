/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: a string
 * Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	int index = 0;
	unsigned int count = 0;

	for (index = 0; s[index] != 0 && accept[index] != 0; index++)
	{
	if (s[index] == accept[index])
	{
		count++;
	}

}
return (count);
}
