#include "main.h"
/**
 * print_alphabet_x10 - Print all letters of English Alphabet ten times.
 */
void print_alphabet_x10(void)
{
int i = 0;
while(i < 10)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
}
}
