#include "main.h"
/**
 * more_numbers - print more numbers
 * Return: void
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
while (j < 10)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
_putchar('1');
_putchar('0' + (i % 10));
i++;
}
_putchar('\n');
j++;
}
}
