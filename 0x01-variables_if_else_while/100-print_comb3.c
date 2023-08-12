#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 1(Success)
 */
int main(void)
{
int number = 1;
for (int i  = 0; i <= 10; i++)
{
for (int j=i+1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
