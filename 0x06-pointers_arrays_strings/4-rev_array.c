#include "main.h"
/**
 * reverse_array - check if litter is uppercase
 * @a: the array
 * @n: number of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int num;
if (n % 2 != 0)
num = (n / 2) + 1;
else
num = n / 2;
for (int i = 0; i < num; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;      
}
}
