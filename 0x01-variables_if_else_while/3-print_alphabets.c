#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lower caps
 * and then in uppercase, follow by a new line
 * return: 0 (Success)
 */
int main(void)
{
	char c = 'a';


	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return(0);
}
