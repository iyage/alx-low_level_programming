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
for (i = 0; i < 10; i++)
{
for (y = 0; y < 10; y++)
{
if (i == 9 && y == 9)
{
printf("%d%d %d%d", i, i, i, y);
}
else
printf("%d%d %d%d, ", i, i, i, y);
}
}
putchar('\n');
return (0);
}
