/* Problem 36 - Double-base palindromes
 * ====================================
 * The decimal number, 585 = 1001001001₂ (binary), is palindromic in both
 * bases.
 *
 * Find the sum of all numbers, less than one million, which are palindromic in
 * base 10 and base 2.
 *
 * (Please note that the palindromic number, in either base, may not include
 * leading zeros.)
 */

#include <stdbool.h>
#include <stdio.h>

#define DOMAIN 1e6

bool ispalindromein(int number, int base) {
  int i = number;
  int result = 0;
  do {
    result = result * base + (i % base);
  } while (i /= base);
  return result == number;
}

int main(int argc, char **argv) {
  int i, answer = 0;
  for (i = 1; i < DOMAIN; i++) {
    if (ispalindromein(i, 2) && ispalindromein(i, 10))
      answer += i;
  }
  printf("%i\n", answer);
  return 0;
}
