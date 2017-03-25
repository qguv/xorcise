/* read a byte; then repeatedly: read a byte, xor with last, output result */

#include <unistd.h>

int main()
{
	/* 0: this or last, 1: last or this, 2: result */
	char b[3], i = 1;

	if (read(STDIN_FILENO, b, 2)) do {
		b[2] = b[0] ^ b[1];
		write(STDOUT_FILENO, b + 2, 1);
	} while(read(STDIN_FILENO, b + (i = !i), 1));

	return 0;
}
