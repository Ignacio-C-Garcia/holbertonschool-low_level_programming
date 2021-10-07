#include "main.h"
/**
 * more_numbers - print 10 times numbers 0 to 14
 */
void more_numbers(void)
{
	int num;
	int n_rows;
	char c[] = "01234567891011121314";

	for (n_rows = 0; n_rows < 10; n_rows++)
	{
		for (num = 0; num <= 19; num++)
		{
			_putchar(c[num]);
		}
		_putchar('\n');
	}
}
