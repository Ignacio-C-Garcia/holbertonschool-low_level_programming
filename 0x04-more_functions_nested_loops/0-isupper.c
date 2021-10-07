/**
 * main - checks for uppercase character
 * Return: 1 if c is uppercase otherwise 0
 * @c: cddd
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
