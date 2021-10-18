/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: a string
 * Return: a number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;

	for (index = 0; s[index] != 0 && accept[index] != 0; index++)
	{
	if (s[index] == accept[index])
	{
		index++;
	}

}
return (index);
}
