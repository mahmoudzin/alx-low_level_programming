#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: int n the nubmer of loops
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
j = i;
while (j)
{
_putchar(' ');
j--;
}
_putchar('/');
_putchar('\n');
}      
}
}