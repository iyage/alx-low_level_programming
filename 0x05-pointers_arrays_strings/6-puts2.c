#include <stdio.h>
#include <string.h>
/**
 * puts2 - returns the length of a string
 * @str: string
 */
void puts2(char *str)
{
int i = 0;
int l = strlen(str);
while (i < l-1 )
{
putchar(*(str + i));
i += 2;
}
printf("\n");
}
