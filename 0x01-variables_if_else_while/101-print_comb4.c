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
int k;
while (i <= 10)
{
j = i + 1;
while (j < 10)
{
k = j + 1;
while (k < 10)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7)
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
