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
int i;
int y;
int z;
for (i = 0; i < 10; i++)
{
for (y = i + 1; y < 10; y++)
{
for (z = y + 1; z < 10; z++)
{
if (i == 7 && y == 8 && z == 9)
printf("%d%d%d", i, y, z);
else
printf("%d%d%d, ", i, y, z);
}
}
}
putchar('\n');
return (0);
}
