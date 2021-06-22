#include "holberton.h"
/**
 * _isalpha - checks whether a character is an alphabet or not
 *
 * @c: c is an ascii character
 *
 * Return: 1 if c is a letter
 */

int _isaplha(int c)
{

if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z' )
return (1);
else
return (0);
}
