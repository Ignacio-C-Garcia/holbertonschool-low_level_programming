#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value to search
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t i;
	size_t low = 0;
	size_t high = size - 1;
	char *comma = "";

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		comma = "";
		for (i = low; i <= high; i++)
		{
			printf("%s%d", comma, array[i]);
			comma = ", ";
		}
		printf("\n");
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;

	}
	return (-1);
}
