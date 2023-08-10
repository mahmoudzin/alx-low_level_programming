#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
    char static[] = {"a", "n", "d", " ", "t", "h", "a", "t", " ", "p","i","e","c","e", " ", "o", "f", " ", "a","r","t", " ", "i","s", " ", "u","s","e","f","u","l","\"", " ","-", " ", "D","o","r","a", " ", 
    "K", "o","r","p","a","r",",", "2","0","1","5","-","1","0","-","1","9"};
  
    // Write the Character to stdout
    for (int i = 0; i <= 57; i++)
        putchar(static[i]);
  
    return (1);
}
