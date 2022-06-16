#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenation function
 * @dest: string to concatenate to
 * @src: string to concatenate
 * Return: char* pointer is return;
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int startStrlen;
char *startStr;
char *endStr;
startStr = dest;
endStr = src;
startStrlen = strlen(dest);
while (*endStr != '\0')
{
*(startStr + startStrlen + i) = *endStr++;
i++;
}
*(startStr + startStrlen + i) = '\0';
return (startStr);
}
