#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenation function
 * @dest: string to concatenate to
 * @src: string to concatenate
 * Return: char* pointer is return;
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int startStrlen;
char *startStr;
char *endStr;
startStr = dest;
endStr = src;
startStrlen = strlen(dest);

while (*endStr != '\0' && i < n)
{
*(startStr + startStrlen + i) = *endStr++;
i++;
}
*(startStr + startStrlen + i) = '\0';
return (startStr);
}
