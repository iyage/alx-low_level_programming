#include <string.h>
#include <stdio.h>
/**
 * leet -  encode string
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
char lowerCase[] = {'a', 'e', 'o', 't', 'l'};
char upperCase[] = {'A', 'E', 'O', 'T', 'L'};
char num[] = {'4', '3', '0', '7', '1'};
int i = 0;
int j;
while (str[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (lowerCase[j] == str[i] || upperCase[j] == str[i])
str[i] = num[j];
}
i++;
}
return (str);
}
