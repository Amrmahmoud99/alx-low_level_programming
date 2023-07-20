#include "main.h"
/*
 * _isdigit - function to know if input is digit or not
 *
 * @c : input
 *
 * return : result
 *
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
