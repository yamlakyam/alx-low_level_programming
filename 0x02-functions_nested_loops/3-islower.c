#include "holberton.h"
#include <ctype.h>
/**
 * int _islower - checks whether a character is upper case or lowercase
 *
 *
 *
 * Return: 1 if c is lower case
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
