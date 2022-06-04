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
for (y = i + 1; y < 10; y++)
{
if (y == 9 && i == 8)
{
printf("%d%d", i, y);
}
else
{
printf("%d%d, ", i, y);
}
}
}
putchar('\n');
return (0);

};
