#include <stdio.h>
#include <stdlib.h>
/**
 *main - main entry
 * @argc: length of command line argument
 * @argv: array of command line argument
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
int change = 0;
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
while (amount > 0)
{
if (amount % 25 == 0)
{
change++;
amount -= 25;
continue;
}
if (amount % 10 == 0)
{
change++;
amount -= 10;
continue;
}
if (amount % 5 == 0)
{
change++;
amount -= 5;
continue;
}
if (amount % 2 == 0)
{
change++;
amount -= 2;
continue;
}
if (amount % 1 == 0)
{
change++;
amount -= 1;
continue;
}
}
}
}

printf("%d\n", change);
return (0);
}
