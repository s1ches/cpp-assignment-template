#include "include/hw05.h"

VecOfStr hw05(const VecOfStr& strings) {
  auto is_equals = [](char letter1, char letter2, char_comprassion comprassion) {
    return comprassion(letter1) == comprassion(letter2);
  };

  auto ignore_case = [](char symbol) {
    return symbol >= 'a' && symbol <= 'z' ? (char) symbol : (char) std::tolower(symbol);
  };

  auto is_letter = [&](char symbol) { return ignore_case(symbol) >= 'a' && ignore_case(symbol) <= 'z'; };

  auto is_polindrom = [&](std::string word) {
    std::string::iterator letter_begin = word.begin();
    std::string::iterator letter_end = word.end() - 1;

    int32_t size = word.size();

    if (size < 2) return true;

    while (size > 1 && !(is_letter(*letter_begin) || is_letter(*letter_end))) {
      if (!is_letter(*letter_begin)) { letter_begin++; size--; }
      if (!is_letter(*letter_end)) { letter_end--; size--; }
    }

    bool is_polindrom = size >= 0;
    size_t letter_counter{};

    while (letter_counter < size / 2 && is_polindrom)
      if (is_letter(*letter_begin) && is_letter(*letter_end)) {
        is_polindrom = is_equals(*letter_begin, *letter_end, ignore_case);
        letter_begin++; letter_counter++; letter_end--;
      } else {
        if (!is_letter(*letter_begin)) letter_begin++;
        else if (!is_letter(*letter_end)) letter_end--;
      }

    return is_polindrom;
  };

  VecOfStr result;

  for (auto& word : strings)
    if (is_polindrom(word)) result.push_back(word);

  return result;
}
