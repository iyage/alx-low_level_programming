#include "main.h"
#include <stdio.h>
/**
 * string_toupper - convert string to upcase
 * @str: an array of integers
 * Return: point to str.
 */
char *string_toupper(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
*(str + i) = *(str + i) - 32;
i++;
}
return (str);
}
