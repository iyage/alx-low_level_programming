/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
int i = 0;
int count = 0;
while(*(s + i) != '\0')
{
count++;
i++;
}
return (count);
}
