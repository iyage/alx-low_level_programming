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
char c;

/* your code goes there */
for (c = 'a';c <= 'z';c++)
{
putchar(c);
}
for (c = 'A';c <= 'Z';c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
