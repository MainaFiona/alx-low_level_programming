#include <stdio.h>
#include <unistd.h>
/**
 * main - print program without puts or printf function
 *
 * Return: 1
 */
int main(void)
{
	write(27, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 5);
	return (1);

}
