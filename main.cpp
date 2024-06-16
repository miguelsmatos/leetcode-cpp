#include <iostream>
#include <string>
#include <vector>

#include "add_two_numbers/solution.hpp"
#include "longest_unique_substring/solution.hpp"

int main(int argc, char* argv[]) {
  std::vector<std::string> msg{ "Hello", "C++", "World", "Leetcode examples" };

  for (const std::string& word : msg) {
    std::cout << word << " ";
  }
  std::cout << std::endl;

  int problem_selector = 3;
  if (argc == 2) {
    std::cout << "Selecting the problem with argv[1]" << std::endl;
    try {
      problem_selector = std::stoi(argv[1]);
    } catch (...) {
      std::cout << "ERROR: invalid problem selector " << argv[0] << " ^"
                << argv[1] << "^" << std::endl;
      return 1;
    }
  }

  // Add two numbers
  if (problem_selector == 1) {
    const AddTwoNumbers::ListNode* l1 =  //
    AddTwoNumbers::fromVectorInt(std::vector<int>{ 9, 9, 9, 9, 9, 9, 9 });
    const AddTwoNumbers::ListNode* l2 =  //
    AddTwoNumbers::fromVectorInt(std::vector<int>{ 9, 9, 9, 9 });
    const AddTwoNumbers::ListNode* lresult = AddTwoNumbers::addTwoNumbers(l1, l2);
    AddTwoNumbers::printSolution(lresult);
  } else if (problem_selector == 3) {
    std::string input_str = "abvwcbefgae";
    std::string result = LongestUniqueSubstring::longestUniqueSubstring(input_str);
    std::cout << "The longest unique substring for '" << input_str << "' is '" << result
              << "', of size " << std::to_string(result.length()) << std::endl;
  }
}
