nclude "main.h"

/**
 * _puts - prints a strin
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	Putchar('\n');
}
