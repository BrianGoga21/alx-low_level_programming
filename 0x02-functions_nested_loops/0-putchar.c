#include <stdio.h>
#include "main.h"
/*
 * main - main block 
 * write a program that prints _putchar
 *
 * Return: 0 (Success)
 */

int main()
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i]; i++)
	_putchar(x[i]);

	_putchar('\n');

	return (0);
}
