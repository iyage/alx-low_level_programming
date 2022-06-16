#include "main.h"
#include <stdio.h>
#include <string.h>
#define IN  1
#define OUT 0

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length as integer;
 */

char *cap_string(char *str)
{
int strLen = strlen(str);
int i = 0;
while (i < strLen)
{
if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
i++;
}

return (str);
}
