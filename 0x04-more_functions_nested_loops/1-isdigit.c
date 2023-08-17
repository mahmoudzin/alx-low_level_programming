#include "main.h"
/**
 * _isdigit - check if @c is integer form 0 to 9
 * @c: int c to load the number
 * Return: int 1 if its int, 0 otherwies
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9 || c >= '0' && c <= '9')
return (1);
else
return (0);
}
