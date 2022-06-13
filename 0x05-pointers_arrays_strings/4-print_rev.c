#include <stdio.h>
/**
 *print_rev- returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */


void print_rev(char *s)
{
int i, count = 0;

while (*(s + i) != '\0')
{
count++;
i++;
}

while (i >= 0)
{
putchar(*(s + i));
i--;
}
printf("\n");
}

