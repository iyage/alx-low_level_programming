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
if (argc > 2)
{
int a = atoi(argv[argc - 1]);
int b = atoi(argv[argc - 2]);
printf("%d\n", a * b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
