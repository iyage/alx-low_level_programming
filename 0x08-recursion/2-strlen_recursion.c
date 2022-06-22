#include "main.h"
#include "string.h"
/**
 * _strlen_recursion - function to print string lenght using recursion
 *@s: char string to print
 */
int _strlen_recursion(char *s)
{
int sum  = 0;
if (*s != '\0')
{
sum  +=_strlen_recursion(s + 1);
}
return (sum);
}