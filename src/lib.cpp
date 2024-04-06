#include "lib.hpp"

namespace cpp_template {

void reverse(std::string& s) {
  for (int i = 0; i < s.size() / 2; ++i) {
    std::swap(s[i], s[s.size() - 1 - i]);
  }
}

}  // namespace cpp_template
