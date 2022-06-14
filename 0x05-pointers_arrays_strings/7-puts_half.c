#include <stdio.h>
#include <string.h>
/**
 * puts2 - returns the length of a string
 * @str: string
 */
void puts_half(char *str)
{
int i;
int l = strlen(str);
int half_length = l / 2;
i = half_length;
while (i < l)
{
putchar(*(str + i));
i++;
}
printf("\n");
}
