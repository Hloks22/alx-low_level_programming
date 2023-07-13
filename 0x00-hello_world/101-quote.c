#include <stdio.h>
#include <unistd.h>
/**
 * main - print exactly "and the piece of art you need"
 * - Dora Korpar, 2015-10-19,
 * Followed by a new line, to the standard error.
 * Return: 0 or(Success)
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
