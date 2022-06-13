#include <stdio.h>
/**
 *_puts - returns the length of a string
 * @str: string
 */

void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
printf("\n");
}