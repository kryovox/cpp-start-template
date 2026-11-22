#pragma once
#include <cstddef>
#include <cstdint>
#include <vector>

namespace academy {
std::int64_t double_value(std::int32_t value);
std::int64_t sum_positive(const std::vector<int>& values);
std::size_t count_even(const std::vector<int>& values);
int clamp_value(int value, int lower, int upper);
}
