#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description : positive or negative
*
* Return: Always 0 (success)
*/


int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d" , n);
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else if (n < 0)
{
printf("is negative");
}
return (0);
}
