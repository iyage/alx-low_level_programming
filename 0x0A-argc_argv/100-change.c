#include <stdio.h>
#include <stdlib.h>
/**
 *cents - function to minimal change
 * @amount: argument value
 */
void cents(int amount)
{
int change = 0;
while (amount > 0)
{
if (amount % 25 == 0)
{
change++;
amount -= 25;
}
else if (amount % 10 == 0)
{
change++;
amount -= 10;
}
else if (amount % 5 == 0)
{
change++;
amount -= 5;
}
else if (amount % 2 == 0)
{
change++;
amount -= 2;
}
else if (amount % 1 == 0)
{
change++;
amount -= 1;
}
}
printf("%d\n", change);
}

/**
 *main - main entry
 * @argc: length of command line argument
 * @argv: array of command line argument
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
int amount = atoi(argv[argc - 1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
if (amount < 0)
{
printf("0\n");
}
else
{
cents(amount);
return (0);
}
}
}
