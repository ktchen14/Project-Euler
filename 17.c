/* Problem 17 - Number letter counts
 * =================================
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five,
 * then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out
 * in words, how many letters would be used?
 *
 *
 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
 * forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20
 * letters. The use of "and" when writing out numbers is in compliance with
 * British usage.
 */

#include <stdio.h>

#define DOMAIN 1000

/* length of one - nineteen */
int lenglish20[19] = {
  3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8
};
/* length of twenty - ninety */
int lenglish10[] = { 6, 6, 5, 5, 5, 7, 6, 6 };

int lenglish(int number) {
  if (number < 20) {
    return lenglish20[number - 1];
  } else if (number < 100) {
    return lenglish10[number / 10 - 2] + lenglish(number % 10);
  } else if (number < 1000) {
    int length = lenglish(number / 100) + 7;
    if (number % 100 > 0) {
      length += 3 /* and */ + lenglish(number % 100);
    }
    return length;
  } else if (number == 1000) {
    return 3 + 8;
  } else return 0;
}

int main(int argc, char **argv) {
  int i, answer = 0;
  for (i = 1; i <= DOMAIN; i++) {
    answer += lenglish(i);
  }
  printf("%i\n", answer);
  return 0;
}
