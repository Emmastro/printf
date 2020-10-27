#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *     -1 error and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
