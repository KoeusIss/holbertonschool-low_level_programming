#include <unistd.h>
int puts(char *s)
{
	write(STDOUT_FILENO, "--> Please make me win!\n", 25);
	return (1);
}
