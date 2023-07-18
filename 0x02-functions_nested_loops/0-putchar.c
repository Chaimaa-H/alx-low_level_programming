#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char text[] = "_putchar\n";
int i;
for (i = 0; text[i] != '\0'; i++)
{
write(1, &text[i], 1);
}
return (0);
}
