#include <stdio.h>

/**
* main - Prints single dg no.of base 10 starting from 0,flwd. by \n,by putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}