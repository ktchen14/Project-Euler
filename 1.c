/* Problem 1 - Multiples of 3 and 5
 * ================================
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we
 * get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

#define DOMAIN 1000

int main(int argc, char **argv) {
  int answer = 0;
  int i;
  for (i = 1; i < DOMAIN; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      answer += i;
  }
  printf("%i\n", answer);
  return 0;
}
