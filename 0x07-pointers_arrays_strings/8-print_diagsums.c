#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - 
 * @a: string to be searched
 * @size: string to be used
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
    int j = 0;
    int sum1 = 0;
    int  sum2 = 0;

	for (; i < size * size; i += size)
	{
		sum1 += a[i + j];
		sum2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
