#include <stdio.h>
/**
* main - Entry point
*
* Description : prints the alphabet in lowercase, and then in uppercase
*
* Return: Always 0 (success)
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{putchar(a);
a++;
}
a = 'A';
while (a <= 'Z')
{putchar(a);
a++;
}
putchar('\n');
return (0);
}
