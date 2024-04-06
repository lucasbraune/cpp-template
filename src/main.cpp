#include <iostream>

#include "header_only_lib.hpp"
#include "lib.hpp"

namespace ct = cpp_template;

int main() {
  std::string greeting = "Hello, world";
  ct::reverse(greeting);
  std::cout << greeting << '\n';
  std::cout << "2 + 2 = " << ct::add_ints(2, 2) << '\n';
  ct::fun_with_ranges();
  return 0;
}
