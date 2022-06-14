#include <stdio.h>
#include <string.h>
/**
 * puts_half- print half string
 */
void puts_half(char *str)
{
int i;
int l = strlen(str);
int half_length = l / 2;
i = half_length;
while (i < l-1)
{
putchar(*(str + i));
i++;
}
printf("\n");
}
