int i;
int aux;
int start = 0;
int end = n
n -=;
for (i = 0; i < n; i++)
{
	aux = a[0];
	a[0] = a[n];
	a[n] = aux;
}
