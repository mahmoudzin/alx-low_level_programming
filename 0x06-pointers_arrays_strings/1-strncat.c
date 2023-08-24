#include "main.h"
/**
 * _strncat - check if litter is uppercase
 * @dest: first string
 * @src: second string
 * @n: the number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; n && src[c2] != '\0'; c2++)
{
dest[c++] = src[c2];
n--;
}
dest[c + c2] = '\0';
return (dest);
}
