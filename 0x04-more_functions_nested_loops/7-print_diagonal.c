#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int ln, space;
if (n > 0)
{
for (ln = 0; ln < n; ln++)
{
for (space = 0; space < ln; space++)
_putchar(' ');

_putchar('\\');

if (ln == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
