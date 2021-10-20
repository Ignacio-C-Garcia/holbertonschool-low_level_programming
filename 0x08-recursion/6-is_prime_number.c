/**
 * _prime_aux - returns the natural square root of a number
 * @n: number
*@i: a number
 * Return: a number
 */
int _prime_aux(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else if (n % i != 0)
		{
			return (_prime_aux(n, (i + 1)));
		}
	}

	return (1);
}
/**
*is_prime_number - returns the natural square root of a n      umber
* @n: number
* Return: a number
*/
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (_prime_aux(n, 2));
	}
	else
	{
		return (0);
	}
}
