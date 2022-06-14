#include <stdio.h>
/**
 * puts2 - returns the length of a string
 * @str: string
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i += 2;
}
printf("\n");
}
