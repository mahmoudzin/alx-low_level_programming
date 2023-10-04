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
int num1 = 0, num2 = 1;
while (num1 <= 99)
{
while (num2 <= 99)
{
putchar(num1 / 10 + '0');
putchar(num1 % 10 + '0');
putchar(' ');
putchar(num2 / 10 + '0');
putchar(num2 % 10 + '0');
putchar(',');
putchar(' ');
num2++;
}
num1++;
num2 = num1 + 1;
}
putchar('\n');
return (0);
}
