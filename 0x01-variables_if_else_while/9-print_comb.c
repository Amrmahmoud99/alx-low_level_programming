#include <stdio.h>
/**
* main - Entry point
*
* Description : prints all possible combinations of single-digit numbers
*
* Return: Always 0 (success)
*/

int main(void)
{
for (char i = 48 ; i <= 57 ; i++)
{
putchar(i);
if (i == 57)
{
break;
}
putchar(',');
}
return (0);
}
