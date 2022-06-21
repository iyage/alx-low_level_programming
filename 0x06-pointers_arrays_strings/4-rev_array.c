#include "main.h"

/**
*  reverse_array - function that reverse array elements
*  @a: array
*  @n: number of array elements
*/

void reverse_array(int *a, int n)
{
int tmp, i;
for (i = n - 1; i > n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}