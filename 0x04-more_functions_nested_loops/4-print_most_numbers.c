#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int i = 0;
for (  ; i <= 9 ; i++)
{
if (i == 2 || i == 4)
continue;
else
_putchar(48 + i);
}
_putchar('/n');
}
