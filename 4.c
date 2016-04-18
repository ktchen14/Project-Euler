/* Problem 4 - Largest palindrome product
 * ======================================
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdbool.h>
#include <stdio.h>

#define DOMAIN 999

bool ispalindrome(int number) {
  int i = number;
  int result = 0;
  do {
    result = result * 10 + (i % 10);
  } while (i /= 10);
  return result == number;
}

int main(int argc, char **argv) {
  int answer = 0;
  int i, j;
  for (i = 1; i <= DOMAIN; i++) {
    for (j = 1; j <= DOMAIN; j++) {
      int result = i * j;
      if (ispalindrome(result) && result > answer)
        answer = result;
    }
  }
  printf("%i\n", answer);
  return 0;
}
