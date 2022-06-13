#include <stdio.h>
/**
 *print_rev- returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */


void print_rev(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
i++;
}

while (i > -1)
{
putchar(*(s + i));
i--;
}
printf("\n");
}

