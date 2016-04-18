/* Problem 30 - Digit fifth powers
 * ===============================
 * Surprisingly there are only three numbers that can be written as the sum of
 * fourth powers of their digits:
 *
 * 1634 = 1⁴ + 6⁴ + 3⁴ + 4⁴
 * 8208 = 8⁴ + 2⁴ + 0⁴ + 8⁴
 * 9474 = 9⁴ + 4⁴ + 7⁴ + 4⁴
 *
 * As 1 = 1⁴ is not a sum it is not included.
 *
 * The sum of these numbers is 1634 + 8208 + 9474 = 19316.
 *
 * Find the sum of all the numbers that can be written as the sum of fifth
 * powers of their digits.
 */

#include <stdio.h>

// 9⁵ * 7 is a 6 digit number so all solutions have <= 6 digits
#define DOMAIN 1e6

int main(int argc, char **argv) {
  int answer = 0;
  for (int i = 2; i < DOMAIN; i++) {
    int d, dsum = 0;
    for (int j = i; j > 0; j /= 10) {
      d = j % 10;
      dsum += d * d * d * d * d;
    }
    if (dsum == i) answer += dsum;
  }
  printf("%i\n", answer);
  return 0;
}
