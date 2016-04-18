/* Problem 6 - Sum square difference
 * =================================
 * The sum of the squares of the first ten natural numbers is,
 *
 * 1² + 2² + ... + 10² = 385
 *
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)² = 55² = 3025
 *
 * Hence the difference between the sum of the squares of the first ten natural
 * numbers and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 */

#include <stdio.h>

#define DOMAIN 100

int main(int argc, char **argv) {
  int sum = 0;
  int sum_of_square = 0;
  int i, answer;
  for (i = 1; i <= DOMAIN; i++) {
    sum += i;
    sum_of_square += i * i;
  }
  answer = (sum * sum) - sum_of_square;
  printf("%i\n", answer);
  return 0;
}
