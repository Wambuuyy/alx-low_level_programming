#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	syscall(SYS_write, STDERR_FILENO,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
