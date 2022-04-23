#include "main.h"
/**
 * _putchar - write a charcter
 * @c: the character to print to stdout
 *
 * Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

