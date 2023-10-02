#include "include/hw03.h"

void hw03(char* str, const char* pattern) {
  if (str == nullptr || pattern == nullptr)
    throw std::runtime_error{"Null Reference Exception"};

  int64_t start_index;
  size_t size_pattern = std::strlen(pattern);
  size_t size_str = std::strlen(str);

  if (size_str == 0 || size_pattern == 0 || size_pattern > size_str
      || (start_index = _get_start_index(str, pattern)) == -1)
    return;

  size_t break_point = (size_str - size_pattern - start_index);
  for (char* str_let = str + start_index; (str_let - (str + start_index)) <= break_point; str_let++) {
    *str_let = *(str_let + size_pattern);
    *(str_let + size_pattern) = '\0';
  }
}

int _get_start_index(char* str, const char* pattern) {
  const int64_t prime_number = 2017;
  int64_t str_hash{0};
  int64_t pattern_hash{0};
  size_t max_power{1};

  size_t size_pattern = std::strlen(pattern);
  size_t size_str = std::strlen(str);

  size_t j = 0;

  for (char* str_let = str; str_let - str < size_pattern; str_let++, j++) {
    str_hash = str_hash * prime_number + (*str_let);
    pattern_hash = pattern_hash * prime_number + (*(pattern + j));
    max_power *= prime_number;
  }

  max_power /= prime_number;
  if (str_hash == pattern_hash && _is_equals(str, pattern, 0))
    return 0;

  size_t i = 1;
  for (char* str_let = str; str_let - str < size_str - size_pattern; str_let++, i++) {
    str_hash = (str_hash - max_power * (*str_let)) * prime_number + (*(size_pattern + str_let));
    if (str_hash == pattern_hash && _is_equals(str, pattern, i))
      return i;
  }

  return -1;
}

bool _is_equals(char* str, const char* pattern, size_t i) {
  size_t j = 0;
  size_t size_pattern = std::strlen(pattern);

  for (char* str_let = str + i; str_let - str + i < size_pattern; str_let++, j++)
    if (*str_let != *(pattern + j))
      return false;

  return true;
}