#include <stdio.h>
/**
* main - Entry point
*
* Descreption : print the size of date stracture
*
* Return: Always 0 (Success)
*/

int main(void)
{
char charvalue;
int intvalue;
long longvalue;
long long longlongvalue;
float floatvalue;
printf("Size of a char: %lu byte(s)\n", sizeof(charvalue));
printf("Size of an int: %lu byte(s)\n", sizeof(intvalue));
printf("Size of a long int: %lu byte(s)\n", sizeof(longvalue));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongvalue));
printf("Size of a float: %lu byte(s)\n", sizeof(floatvalue));
return (0);
}
