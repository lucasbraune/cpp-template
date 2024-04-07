#include "lib.hpp"

namespace cpp_template {

void reverse(std::string& s) {
  for (int i = 0; i < s.size() / 2; ++i) {
    std::swap(s[i], s[s.size() - 1 - i]);
  }
}

std::optional<char> first_char(std::string_view str) {
  if (str.empty()) {
    return {};
  } else {
    return {str[0]};
  }
}

}  // namespace cpp_template
