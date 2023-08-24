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
for (i=0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
