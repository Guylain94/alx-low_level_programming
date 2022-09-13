#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char Guy[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(Guy[i]);
	}

	_putchar('\n');
	return (0);
}
