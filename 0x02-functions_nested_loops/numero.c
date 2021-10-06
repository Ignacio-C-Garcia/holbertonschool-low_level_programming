#include <stdio.h>
int b = 0;
void suma(int n);
int main(void)
{
	suma(1);
	return (0);
}
void suma(int n)
{
	b += n;
if (b <= 89)
{
	printf("%d\n", b);
	suma(b);
}
else
{
printf("%d\n", b);
}
}
