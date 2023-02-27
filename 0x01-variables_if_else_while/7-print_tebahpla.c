#include <stdio.h>
/*-- More headers goes here --*/

/**
 * main - Prints the alphabet in reverse lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
