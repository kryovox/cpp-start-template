#include "exercises.hpp"
#include <climits>
#include <iostream>
#include <string>

template<class T, class U>
bool check(const char* name, T actual, U expected) {
    if (actual == static_cast<T>(expected)) return true;
    std::cerr << name << ": expected " << expected << ", got " << actual << '\n';
    return false;
}

int main(int argc, char** argv) {
    if (argc != 2) return 2;
    std::string test = argv[1];
    bool ok = true;
    using namespace academy;
    if (test == "smoke") {
        ok &= check("double positive", double_value(21), 42);
        ok &= check("double negative", double_value(-4), -8);
    } else if (test == "sum") {
        ok &= check("mixed", sum_positive({-3, 5, 0, 2, -9}), 7);
        ok &= check("empty", sum_positive({}), 0);
        ok &= check("negative only", sum_positive({-2, 0, -8}), 0);
        ok &= check("large sum", sum_positive({INT_MAX, INT_MAX}), static_cast<std::int64_t>(INT_MAX) * 2);
    } else if (test == "count") {
        ok &= check("mixed even", count_even({-4, 3, 0, 8, -5}), 3);
        ok &= check("empty", count_even({}), 0);
        ok &= check("all odd", count_even({-3, 1, 5}), 0);
    } else if (test == "clamp") {
        ok &= check("below", clamp_value(-3, 0, 10), 0);
        ok &= check("inside", clamp_value(7, 0, 10), 7);
        ok &= check("above", clamp_value(19, 0, 10), 10);
        ok &= check("equal limits", clamp_value(19, 4, 4), 4);
        ok &= check("negative bounds", clamp_value(-8, -5, -2), -5);
    } else { return 2; }
    if (ok) std::cout << test << ": PASS\n";
    return ok ? 0 : 1;
}
