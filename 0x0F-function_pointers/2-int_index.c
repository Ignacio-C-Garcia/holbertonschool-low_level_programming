/**
 * int_index - a function that searches for an integer.
 * @array: array of numbers
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *Return: the index of the first element for which cmp returns 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
