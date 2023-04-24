#include <stdio.h>

int main() {
  char letter;

  // Print lowercase alphabet
  for (letter = 'a'; letter <= 'z'; letter++) {
    putchar(letter);
  }

  putchar('\n');

  // Print uppercase alphabet
  for (letter = 'A'; letter <= 'Z'; letter++) {
    putchar(letter);
  }

  putchar('\n');

  return 0;
}
