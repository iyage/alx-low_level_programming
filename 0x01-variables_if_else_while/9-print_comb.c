#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int tmp;

/* your code goes there */
for (n = 48; n < 63; n++)
{
if (n > 57)
{
tmp = n + 39;
putchar(tmp);
}
else
{
putchar(n);
}
}
putchar('\n');
return (0);
}
