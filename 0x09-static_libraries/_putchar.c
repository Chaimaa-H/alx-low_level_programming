#include "main.h"
#include <unistd.h> // Include the header for the write function

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: On success, 1. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}
