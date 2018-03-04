#include "count_words.h"

namespace exerc_01 {
  // N.B. The const& simply means:
  // - The function will only read from the variable without odifying it.
  // - The function won't need a copy of the variable.
  int count_words(std::string const& text) {
    int result = 0;

    // HINT:
    // the block of code inside the "for" runs once for each character in text, 
    // in order, setting "c" to that character.
    for(char c : text) {

    }

    return result;
  }
}
