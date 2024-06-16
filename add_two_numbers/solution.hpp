#pragma once

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace AddTwoNumbers {

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  //
  ListNode() : val(0), next(nullptr) {}
  explicit ListNode(int x) : val(x), next(nullptr) {}
  explicit ListNode(int x, ListNode* next) : val(x), next(next) {}
};

inline void printSolution(const ListNode* l) {
  std::string solution = "";
  for (const ListNode* it = l; it != nullptr; it = it->next) {
    solution += std::to_string(it->val);
  }
  std::cout << "Output: [";
  for (size_t i = 0; i < solution.size(); i++) {
    if (i)
      std::cout << ",";
    std::cout << solution[i];
  }
  std::cout << "]" << std::endl;
  std::reverse(solution.begin(), solution.end());
  std::cout << "Value: " << solution << std::endl;
}

inline ListNode* fromVectorInt(const std::vector<int>& vec) {
  ListNode* last = nullptr;
  for (int i : vec) {
    ListNode* n = new ListNode(i, last);
    last        = n;
  }
  return last;
}

inline ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2) {
  std::string number_1 = "";
  std::string number_2 = "";
  for (const ListNode* l = l1; l != nullptr; l = l->next) {
    number_1 = std::to_string(l->val) + number_1;
  }
  for (const ListNode* l = l2; l != nullptr; l = l->next) {
    number_2 = std::to_string(l->val) + number_2;
  }
  std::string sum = std::to_string(std::stoi(number_1) + std::stoi(number_2));
  ListNode* ptr   = nullptr;
  for (auto it = sum.begin(); it != sum.end(); ++it) {
    int val        = *it - '0';
    ListNode* last = new ListNode(val, ptr);
    ptr            = last;
  }

  return ptr;
}
};  // namespace AddTwoNumbers
