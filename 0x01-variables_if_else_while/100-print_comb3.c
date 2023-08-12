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
int i = 0;
int j;
while (i <= 10)
{
j=i+1;
while (j < 10)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
