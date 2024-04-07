#ifndef LIB_H
#define LIB_H

#include <optional>
#include <string>
#include <string_view>

namespace cpp_template {

void reverse(std::string& s) noexcept;
std::optional<char> first_char(std::string_view str) noexcept;

}  // namespace cpp_template

#endif
