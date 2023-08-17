#include "main.h"
/**
 * print_line - check if litter is uppercase
 * @n: int n the number of _ carcter
 * Return: Void
 */
void print_line(int n)
{
int i;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
}
