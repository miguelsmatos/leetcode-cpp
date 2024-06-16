#pragma once

#include <string>
#include <unordered_map>

namespace LongestUniqueSubstring {
std::string longestUniqueSubstring(const std::string& str) {
  std::string result{};
  std::unordered_map<char, bool> visited{};
  size_t left = 0, right = 0, max_l = 0;

  while (right < str.length() && left < str.length()) {
    if (visited.find(str[right]) != visited.end() && visited[str[right]]) {
      while (visited[str[right]]) {
        visited[str[left]] = false;
        left++;
      }
    }
    if (right - left + 1 > max_l) {
      max_l  = right - left + 1;
      result = str.substr(left, max_l);
    }
    visited[str[right++]] = true;
  }

  return result;
}
}  // namespace LongestUniqueSubstring
