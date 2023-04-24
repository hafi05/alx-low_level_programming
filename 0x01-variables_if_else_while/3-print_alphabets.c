#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main() {
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++) {
    putchar(letter);
  }
  
  putchar('\n');

 
  for (letter = 'A'; letter <= 'Z'; letter++) {
    putchar(letter);
  }

  putchar('\n');

  return 0;
}
