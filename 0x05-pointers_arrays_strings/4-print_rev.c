#include "main.h"

/**
 * print_rev - prints a string in reversefollowed by a new line
 * @s: pointer location for char
 * Return: string folllowed by a new line
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
