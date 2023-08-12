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
char alphabet = 'a';

while (alphabet <= 'z') 
{
if(alphabet == 'q' || alphabet == 'e') {
alphabet++;
continue;
}
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
