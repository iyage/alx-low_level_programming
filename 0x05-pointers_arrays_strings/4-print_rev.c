#include <stdio.h>
/**
 *print_rev- returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */


void print_rev(char *s)
{
int i = 0;
int count = 0;
while (*(s + i) != '\0')
{
count++;
i++;
}
count = count - 1;
while (count >= 0)
{
printf("%c", *(s + count));
count--;
}
putchar('\n');
}

