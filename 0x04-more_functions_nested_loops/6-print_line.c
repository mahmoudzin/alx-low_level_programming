#include "main.h"
/**
 * print_line - check if litter is uppercase
 * @n: int n the number of _ carcter
 * Return: Void
 */
void print_line(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
} else 
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
