#include "main.h"
/*
 */
void print_most_numbers(void)
{
for (int i = 0 ; i <= 9 ; i++)
{
if (i == 2 || i == 4)
continue;
else
_putchar(48 + i);
}
_putchar('/n');
}
