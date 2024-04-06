#ifndef HEADER_ONLY_LIB_H
#define HEADER_ONLY_LIB_H

#include <string>
#include <ranges>
#include <iostream>

namespace cpp_template {

inline int add_ints(int a, int b) {
    return a + b;
}

inline void fun_with_ranges() {
    auto const ints = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    auto even = [](int i) { return 0 == i % 2; };
    auto square = [](int i) { return i * i; };
 
    // the "pipe" syntax of composing the views:
    for (int i : ints | std::views::filter(even) | std::views::transform(square))
    std::cout << i << ' ';
 
    std::cout << '\n';
}

} // namespace cpp_template

#endif // HEADER_ONLY_LIB_H

