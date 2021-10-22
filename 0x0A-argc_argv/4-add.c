#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: string value
 * Return:0 || 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 1;
	int i;

	if (argc <= 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		if (sum == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum - 1);
	return (0);
}
