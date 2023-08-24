#include "main.h"
/**
 * _strcmp - check if litter is uppercase
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int s1_sizeofascci = 0;
int s2_sizeofascci = 0;
int i = 0;
while (s1[i] && s1[i] != '\0')
{
s1_sizeofascci += s1[i];
i++;
}
i = 0;
while (s2[i] && s2[i] != '\0')
{
s2_sizeofascci += s2[i];
i++;
}
if (s1_sizeofascci > s2_sizeofascci)
return (1);
else if (s1_sizeofascci < s2_sizeofascci)
return (-1);
return (0);
}
