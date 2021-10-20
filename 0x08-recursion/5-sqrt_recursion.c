/**
 * _sqrt_aux - returns the natural square root of a number
 * @n: number
*@i: a number
 * Return: a number
 */
int _sqrt_aux(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_aux(n, (i + 1)));
	}
}
/**
*_sqrt_recursion - returns the natural square root of a n      umber
* @n: number
* Return: a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_aux(n, 0));
	}
}
