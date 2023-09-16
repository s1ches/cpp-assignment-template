#include "include/hw01.h"
#include <math.h>

int hw01(int start, int end) {
  if (start < 10 ||  end < 10 || start > 99 || end > 99)
    return -1;

  int res = 0;

  for (int i = start; i <= end; i++) {
    if (_is_prime(i))
      res += _digit_sum(i);
  }

  return res;
}

bool _is_prime(int num) {
  bool num_check = true;
  for (int j = 2; j <= sqrt(num) && num_check; j++)
    if (num % j == 0)
      num_check = false;

  return num_check;
}

int _digit_sum(int num) {
  int sum = 0;

  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}