#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns character written as unsigned char cast to int.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
