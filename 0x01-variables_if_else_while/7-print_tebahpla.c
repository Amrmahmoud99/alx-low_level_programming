#include <stdio.h>
/**
* main - Entry point
*
* Description : prints the lowercase alphabet in reverse
*
* Return: Always 0 (success)
*/

int main (void)
{
char a = 'z';
while (a >= 'a')
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
