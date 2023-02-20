#include <stadio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * print single digit numbers of base 10
 * starting from 0
 * return: 0 {success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
