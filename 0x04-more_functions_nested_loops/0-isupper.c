#include "main.h"
/**
 * _isupper - check if litter is uppercase
 * @c: int c to load the litter
 * Return: int 1 if uppercase, 0 otherwies
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
