#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    
    return write(1, &c, 1);
}

int _islower(int c) {
   
    return c >= 'a' && c <= 'z';
}

int _isalpha(int c) {
    
    return _islower(c) || _isupper(c);
}

int _abs(int n) {
   
    return n >= 0 ? n : -n;
}

int _isupper(int c) {
   
    return c >= 'A' && c <= 'Z';
}

int _isdigit(int c) {
   
    return c >= '0' && c <= '9';
}

int _strlen(char *s) {
   
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

void _puts(char *s) {
   
    while (*s != '\0') {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    
    char *originalDest = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return originalDest;
}

/* Implementations of other functions */

/* And so on for the rest of the functions */

