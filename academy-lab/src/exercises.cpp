#include "exercises.hpp"

namespace academy {
std::int64_t double_value(std::int32_t value) {
    return static_cast<std::int64_t>(value) * 2;
}

std::int64_t sum_positive(const std::vector<int>& values) {
    // TODO 1: return the sum of strictly positive elements.
    (void)values;
    return 0;
}

std::size_t count_even(const std::vector<int>& values) {
    // TODO 2: count even elements, including zero and negative even values.
    (void)values;
    return 0;
}

int clamp_value(int value, int lower, int upper) {
    // TODO 3: clamp value to the inclusive [lower, upper] interval.
    (void)lower;
    (void)upper;
    return value;
}
}
