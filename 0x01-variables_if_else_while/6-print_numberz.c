#include <stdio.h>
/**
* main - Entry point
*
* Description : prints all single numbers of base 10 starting from 0
*
* Return: Always 0 (success)
*/
int main(void)
{
for (char a = '0'; a <= '9'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
