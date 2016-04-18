/* Problem 2 - Even Fibonacci numbers
 * ==================================
 * Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>

#define DOMAIN 4e6

int main(int argc, char **argv) {
  int f[3] = { 3, 2, 1 };
  int answer = 2;
  while ((f[0] = f[1] + f[2]) < DOMAIN) {
    if (f[0] % 2 == 0)
      answer += f[0];
    f[2] = f[1];
    f[1] = f[0];
  }
  printf("%i\n", answer);
  return 0;
}