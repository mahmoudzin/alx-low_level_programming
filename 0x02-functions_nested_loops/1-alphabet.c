#include "main.h"
/**
 * print_alphabet - Print all letters of English Alphabet.
 */
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
