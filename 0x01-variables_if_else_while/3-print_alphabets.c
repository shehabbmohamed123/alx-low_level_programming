#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print aplhabet in iowercase then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*ptints a - z*/
	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
	putchar(CH);
	CH++;
	}
	putchar('\n');

	return (0);
}
