#include "main.h"
#include  <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */


int main(int argc, char *argv[])
{
int result = 0, num, i, j, k;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("%s\n", "Error");
return (0);
}
}
}
for (k = 1; k < argc; k++)
{
num = atoi(argv[k]);
result += num;
}
printf("%d\n", result);
return (0);
}
