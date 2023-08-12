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
number++;
}
char alphabet = 'a';
while (alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
