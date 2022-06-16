#include "main.h"
#include <stdio.h>
/**
 * string_toupper - convert string to upcase
 * @str: an array of integers
 * Return: point to str.
 */
char *string_toupper(char *str)
{
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
*str = *str - 32;
*str++;
}
return (str);
}
