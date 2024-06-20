#pragma once

#include <algorithm>
#include <vector>

namespace MagneticForceBetweenTwoBalls {
inline bool isDistanceValid(const std::vector<int>& position, const int m, const int distance) {
  size_t previous = 0;
  int placed      = 1;
  for (size_t i = 1; i < position.size(); i++) {
    if (position[i] - position[previous] >= distance) {
      if (++placed == m)
        return true;
      previous = i;
    }
  }
  return false;
}

inline int idealBasketPlacement(const std::vector<int>& position, const int m) {
  std::vector<int> copy(position.begin(), position.end());
  std::sort(copy.begin(), copy.end());
  int left = 0, right = copy[copy.size() - 1];
  int result = 0;
  while (left <= right) {
    int middle = left + (right - left) / 2;
    if (isDistanceValid(copy, m, middle)) {
      result = middle;
      left   = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return result;
}

}  // namespace MagneticForceBetweenTwoBalls
