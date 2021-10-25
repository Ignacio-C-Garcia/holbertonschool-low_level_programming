/**
 * _isdigit - checks for a digit
 * Return: when c is a digit 1 other wise 0
 * @c: is a character
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
