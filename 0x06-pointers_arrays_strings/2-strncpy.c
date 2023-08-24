#include "main.h"
/**
 * _strncpy - check if litter is uppercase
 * @dest: first string
 * @src: second string
 * @n: the number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (n >= 0)
{
dest[i] = src[i];
i++;
n--;
}
return (dest);
}
