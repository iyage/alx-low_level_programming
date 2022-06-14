#include <stdio.h>
#include <string.h>
/**
 * void print_array - print n nos of array element
 *  @a: pointer to array
 * @n: n nos of element
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n ; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);

}
putchar('\n');
}
