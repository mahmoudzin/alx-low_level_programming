#include "main.h"
/**
 * _strcat - contact two strings with each other
 * @*dest: the first string
 * @*src: the Second string
 * Return: pointer that point at the whole string
 */
char *_strcat(char *dest, char *src) 
{
int c, c2;
c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];
return (dest);
}
