#include <stdio.h>
/**
 *main - main entry
 * @argc: length of command line argument
 * @argv: array of command line argument
 * Return: always return 0
 */
int main(int argc, char* argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", i);
}
return (0);
}
