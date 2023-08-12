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
int number  = 0;
while (number <= 9)
{
putchar('0' + number);
if(number != 9)
putchar(',');
number++;
}
return (0);
}
