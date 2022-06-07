/* more headers goes there */

/**
 * _putchar - Entry point
 *
 * print_alphabet - function that print lower case alphabet
 * 
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
