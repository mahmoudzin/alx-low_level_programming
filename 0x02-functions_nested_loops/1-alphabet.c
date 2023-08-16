#include <stdio.h>
#include "main.h"
//#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0(Success)
 */
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
