#include <stdio.h>
/**
 * main - prints the series with commas
 *
 * Return: always success
 */

int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
