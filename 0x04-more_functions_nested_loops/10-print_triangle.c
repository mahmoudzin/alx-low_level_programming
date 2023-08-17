#include "main.h"
/**
 * print_triangle - Print Triangle
 * @size: int size
 * Return: void
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (j = size; j >= 1; j--)
{
if (j <= i)
_putchar(35);
else
_putchar(' ');
}
_putchar('\n');
}
}
}
