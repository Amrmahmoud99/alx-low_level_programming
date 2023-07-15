#include <stdio.h>
/**
* main - Entry point
*
* Description : prints the alphabet in lowercase
*
* Return: Always 0 (success)
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
{
a++;
continue; }
putchar(a);
a++; }
return (0);
}
