#include <stdio.h>
/**
 * main - prints out numbers from zero to nine
 *
 * Return: 0 Always success
 */
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
