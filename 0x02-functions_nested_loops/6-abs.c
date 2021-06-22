#include "holberton.h"

/**
 * _abs - returns the absolute value of an int
 * @n: an int whos abs value is to be computed
 *
 * Return: positive integer
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
