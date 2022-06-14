#include <stdio.h>
#include <string.h>
/**
 * puts_half- print half string
 *  * @str: string
 */
void puts_half(char *str)
{
int i;
int l = strlen(str);
int half_length;
if (l % 2 == 0)
half_length = l / 2;
else
half_length = (l - 1) / 2;
i = half_length;
while (i < l)
{
putchar(*(str + i));
i++;
}
printf("\n");
}
