#include <iostream>
#include "lib.hpp"
#include "header_only_lib.hpp"

namespace ct = cpp_template;

int main() {
    std::string greeting = "Hello, world";
    ct::reverse(greeting);
    std::cout << greeting << '\n';
    std::cout << "2 + 2 = " << ct::add(2, 2) << '\n';
    return 0;
}
