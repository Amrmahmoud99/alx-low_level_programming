#include <stdio.h>
/**
* main - Entry point
*
*Description : program that prints all the numbers of base 16 in lowercase
*
* Return: Always 0 (success)
*/
int main(void)
{
for (int i = 48 ; i <= 57; i++)
{
putchar(i);
}
for (char a = 'a' ; a <= 'f'; a++)
{
putchar(a);
}
return (0);
}
