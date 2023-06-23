#include "main.h"
  2 #include <stdio.h>
  3
  4 /**
  5 * main - check the code
  6 *
  7 * Return: Always 0.
  8 */
  9 int main(void)
 10 {
 11         char c;
 12
 13         c = '0';
 14         printf("%c: %d\n", c, _isdigit(c));
 15         c = 'a';
 16         printf("%c: %d\n", c, _isdigit(c));
 17         return (0);
 18 }
