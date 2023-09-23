#include "include/hw02.h"

std::string hw02(std::string input_str) {
  for (size_t i = 0; i < input_str.length(); i++) {
    for (size_t j = i + 1; j < input_str.length(); j++)
      if (input_str[i] == input_str[j])
        input_str.erase(j--, 1);
  }

  return input_str;
}
